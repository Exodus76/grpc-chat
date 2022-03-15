// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: basic.proto

#include "basic.pb.h"
#include "basic.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace chat {

static const char* Connect_method_names[] = {
  "/chat.Connect/NewUserConnect",
  "/chat.Connect/GetUserList",
  "/chat.Connect/Broadcast",
};

std::unique_ptr< Connect::Stub> Connect::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Connect::Stub> stub(new Connect::Stub(channel, options));
  return stub;
}

Connect::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_NewUserConnect_(Connect_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetUserList_(Connect_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_Broadcast_(Connect_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::chat::Message>* Connect::Stub::NewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request) {
  return ::grpc::internal::ClientReaderFactory< ::chat::Message>::Create(channel_.get(), rpcmethod_NewUserConnect_, context, request);
}

void Connect::Stub::async::NewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect* request, ::grpc::ClientReadReactor< ::chat::Message>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::chat::Message>::Create(stub_->channel_.get(), stub_->rpcmethod_NewUserConnect_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::chat::Message>* Connect::Stub::AsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::chat::Message>::Create(channel_.get(), cq, rpcmethod_NewUserConnect_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::chat::Message>* Connect::Stub::PrepareAsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::chat::Message>::Create(channel_.get(), cq, rpcmethod_NewUserConnect_, context, request, false, nullptr);
}

::grpc::ClientReader< ::chat::UserList>* Connect::Stub::GetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request) {
  return ::grpc::internal::ClientReaderFactory< ::chat::UserList>::Create(channel_.get(), rpcmethod_GetUserList_, context, request);
}

void Connect::Stub::async::GetUserList(::grpc::ClientContext* context, const ::chat::Close* request, ::grpc::ClientReadReactor< ::chat::UserList>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::chat::UserList>::Create(stub_->channel_.get(), stub_->rpcmethod_GetUserList_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::chat::UserList>* Connect::Stub::AsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::chat::UserList>::Create(channel_.get(), cq, rpcmethod_GetUserList_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::chat::UserList>* Connect::Stub::PrepareAsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::chat::UserList>::Create(channel_.get(), cq, rpcmethod_GetUserList_, context, request, false, nullptr);
}

::grpc::Status Connect::Stub::Broadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::chat::Close* response) {
  return ::grpc::internal::BlockingUnaryCall< ::chat::Message, ::chat::Close, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Broadcast_, context, request, response);
}

void Connect::Stub::async::Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::chat::Message, ::chat::Close, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Broadcast_, context, request, response, std::move(f));
}

void Connect::Stub::async::Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Broadcast_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::chat::Close>* Connect::Stub::PrepareAsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::chat::Close, ::chat::Message, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Broadcast_, context, request);
}

::grpc::ClientAsyncResponseReader< ::chat::Close>* Connect::Stub::AsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncBroadcastRaw(context, request, cq);
  result->StartCall();
  return result;
}

Connect::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Connect_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Connect::Service, ::chat::FirstConnect, ::chat::Message>(
          [](Connect::Service* service,
             ::grpc::ServerContext* ctx,
             const ::chat::FirstConnect* req,
             ::grpc::ServerWriter<::chat::Message>* writer) {
               return service->NewUserConnect(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Connect_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Connect::Service, ::chat::Close, ::chat::UserList>(
          [](Connect::Service* service,
             ::grpc::ServerContext* ctx,
             const ::chat::Close* req,
             ::grpc::ServerWriter<::chat::UserList>* writer) {
               return service->GetUserList(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Connect_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Connect::Service, ::chat::Message, ::chat::Close, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Connect::Service* service,
             ::grpc::ServerContext* ctx,
             const ::chat::Message* req,
             ::chat::Close* resp) {
               return service->Broadcast(ctx, req, resp);
             }, this)));
}

Connect::Service::~Service() {
}

::grpc::Status Connect::Service::NewUserConnect(::grpc::ServerContext* context, const ::chat::FirstConnect* request, ::grpc::ServerWriter< ::chat::Message>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Connect::Service::GetUserList(::grpc::ServerContext* context, const ::chat::Close* request, ::grpc::ServerWriter< ::chat::UserList>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Connect::Service::Broadcast(::grpc::ServerContext* context, const ::chat::Message* request, ::chat::Close* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace chat

