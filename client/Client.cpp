#include "stub/basic.grpc.pb.h"
#include <memory>
#include <iostream>
#include <string>
#include <vector>
#include <thread>

#include <grpcpp/grpcpp.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

using chat::Connect;
using chat::clientRequest;
using chat::serverResponse;

clientRequest MakeClientRequest(const std::string& message) {
    clientRequest r;
    r.set_name(message);
    return r;
}

class ConnectClient {
public:
    //ConnectClient(std::shared_ptr<Channel> channel) : stub_(Connect::NewStub(channel)) {}
    ConnectClient(std::shared_ptr<Channel> channel) : stub_(Connect::NewStub(channel)) {
            
    };

    void SayHello() {
        ClientContext context;
        std::shared_ptr<ClientReaderWriter<clientRequest, serverResponse>> stream(
            stub_->SayHello(&context)
        );
        //write to the server
        std::thread writer([stream]() {
            std::vector<clientRequest> name{
                MakeClientRequest("Marco"),
                MakeClientRequest("Britney"),
                MakeClientRequest("crazy"),
                MakeClientRequest("someone")
            };
            for (const clientRequest& c : name) {
                std::cout << "name: " << c.name() << "\n";
                stream->Write(c);
            }
            stream->WritesDone();
            });

        serverResponse reply;
        while (stream->Read(&reply)) {
            std::cout << "received: " << reply.message() << "\n";
        }
        writer.join();
        Status status = stream->Finish();
        if (!status.ok()) {
            std::cout << "fail" << std::endl;
        }

    }
private:
    std::unique_ptr<Connect::Stub> stub_;
};

//#include "gui/gui.h"


int main(int argc, char** argv) {

    std::string target_str = "localhost:42069";
    ConnectClient connect(grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
    //std::string user("world");
    //std::vector<> user = {"crazy", "stepbro", "mridul", "someone"};
    //std::string reply;
    //ConnectClient c();
    connect.SayHello();
    //std::cout << "Connection received: " << reply << std::endl;
    return 0;
}




//int main(int argc, char** argv) {
//    //just asking for the target to connect to
//    std::string target_str;
//    std::string arg_str("--target");
//    if (argc > 1) {
//        std::string arg_val = argv[1];
//        size_t start_pos = arg_val.find(arg_str);
//        if (start_pos != std::string::npos) {
//            start_pos += arg_str.size();
//            if (arg_val[start_pos] == '=') {
//                target_str = arg_val.substr(start_pos + 1);
//            }
//            else {
//                std::cout << "The only correct argument syntax is --target="
//                    << std::endl;
//                return 0;
//            }
//        }
//        else {
//            std::cout << "The only acceptable argument is --target=" << std::endl;
//            return 0;
//        }
//    }
//    else {
//        target_str = "localhost:42069";
//    }
//    ConnectClient connect(
//        grpc::CreateChannel(target_str, grpc::InsecureChannelCredentials()));
//    std::string user("world");
//    std::string reply = connect.SayHello(user);
//    std::cout << "Connection received: " << reply << std::endl;
//
//    
//    myApp m;
//    //wxGetApp().OnInit();
//    //std::cout << wxGetApp().GetAppDisplayName() << std::endl;
//    //m.OnInit();
//
//    return 0;
//}