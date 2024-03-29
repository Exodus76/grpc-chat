// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: basic.proto
#ifndef GRPC_basic_2eproto__INCLUDED
#define GRPC_basic_2eproto__INCLUDED

#include "basic.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace chat {

class Connect final {
 public:
  static constexpr char const* service_full_name() {
    return "chat.Connect";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    // rpc SayHello (HelloRequest) returns (HelloReply) {}
    // to send all the messages to the new client
    std::unique_ptr< ::grpc::ClientReaderInterface< ::chat::Message>> NewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::chat::Message>>(NewUserConnectRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::Message>> AsyncNewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::Message>>(AsyncNewUserConnectRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::Message>> PrepareAsyncNewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::Message>>(PrepareAsyncNewUserConnectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::chat::UserList>> GetUserList(::grpc::ClientContext* context, const ::chat::Close& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::chat::UserList>>(GetUserListRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::UserList>> AsyncGetUserList(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::UserList>>(AsyncGetUserListRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::UserList>> PrepareAsyncGetUserList(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::chat::UserList>>(PrepareAsyncGetUserListRaw(context, request, cq));
    }
    // broadcast the new messages
    virtual ::grpc::Status Broadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::chat::Close* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>> AsyncBroadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>>(AsyncBroadcastRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>> PrepareAsyncBroadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>>(PrepareAsyncBroadcastRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // Sends a greeting
      // rpc SayHello (HelloRequest) returns (HelloReply) {}
      // to send all the messages to the new client
      virtual void NewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect* request, ::grpc::ClientReadReactor< ::chat::Message>* reactor) = 0;
      virtual void GetUserList(::grpc::ClientContext* context, const ::chat::Close* request, ::grpc::ClientReadReactor< ::chat::UserList>* reactor) = 0;
      // broadcast the new messages
      virtual void Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, std::function<void(::grpc::Status)>) = 0;
      virtual void Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientReaderInterface< ::chat::Message>* NewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::chat::Message>* AsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::chat::Message>* PrepareAsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::chat::UserList>* GetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::chat::UserList>* AsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::chat::UserList>* PrepareAsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>* AsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::chat::Close>* PrepareAsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    std::unique_ptr< ::grpc::ClientReader< ::chat::Message>> NewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::chat::Message>>(NewUserConnectRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::Message>> AsyncNewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::Message>>(AsyncNewUserConnectRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::Message>> PrepareAsyncNewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::Message>>(PrepareAsyncNewUserConnectRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::chat::UserList>> GetUserList(::grpc::ClientContext* context, const ::chat::Close& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::chat::UserList>>(GetUserListRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::UserList>> AsyncGetUserList(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::UserList>>(AsyncGetUserListRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::UserList>> PrepareAsyncGetUserList(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::chat::UserList>>(PrepareAsyncGetUserListRaw(context, request, cq));
    }
    ::grpc::Status Broadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::chat::Close* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Close>> AsyncBroadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Close>>(AsyncBroadcastRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Close>> PrepareAsyncBroadcast(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::chat::Close>>(PrepareAsyncBroadcastRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void NewUserConnect(::grpc::ClientContext* context, const ::chat::FirstConnect* request, ::grpc::ClientReadReactor< ::chat::Message>* reactor) override;
      void GetUserList(::grpc::ClientContext* context, const ::chat::Close* request, ::grpc::ClientReadReactor< ::chat::UserList>* reactor) override;
      void Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, std::function<void(::grpc::Status)>) override;
      void Broadcast(::grpc::ClientContext* context, const ::chat::Message* request, ::chat::Close* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientReader< ::chat::Message>* NewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request) override;
    ::grpc::ClientAsyncReader< ::chat::Message>* AsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::chat::Message>* PrepareAsyncNewUserConnectRaw(::grpc::ClientContext* context, const ::chat::FirstConnect& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientReader< ::chat::UserList>* GetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request) override;
    ::grpc::ClientAsyncReader< ::chat::UserList>* AsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::chat::UserList>* PrepareAsyncGetUserListRaw(::grpc::ClientContext* context, const ::chat::Close& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::Close>* AsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::chat::Close>* PrepareAsyncBroadcastRaw(::grpc::ClientContext* context, const ::chat::Message& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_NewUserConnect_;
    const ::grpc::internal::RpcMethod rpcmethod_GetUserList_;
    const ::grpc::internal::RpcMethod rpcmethod_Broadcast_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    // rpc SayHello (HelloRequest) returns (HelloReply) {}
    // to send all the messages to the new client
    virtual ::grpc::Status NewUserConnect(::grpc::ServerContext* context, const ::chat::FirstConnect* request, ::grpc::ServerWriter< ::chat::Message>* writer);
    virtual ::grpc::Status GetUserList(::grpc::ServerContext* context, const ::chat::Close* request, ::grpc::ServerWriter< ::chat::UserList>* writer);
    // broadcast the new messages
    virtual ::grpc::Status Broadcast(::grpc::ServerContext* context, const ::chat::Message* request, ::chat::Close* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestNewUserConnect(::grpc::ServerContext* context, ::chat::FirstConnect* request, ::grpc::ServerAsyncWriter< ::chat::Message>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetUserList() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetUserList(::grpc::ServerContext* context, ::chat::Close* request, ::grpc::ServerAsyncWriter< ::chat::UserList>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Broadcast() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBroadcast(::grpc::ServerContext* context, ::chat::Message* request, ::grpc::ServerAsyncResponseWriter< ::chat::Close>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_NewUserConnect<WithAsyncMethod_GetUserList<WithAsyncMethod_Broadcast<Service > > > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::chat::FirstConnect, ::chat::Message>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::chat::FirstConnect* request) { return this->NewUserConnect(context, request); }));
    }
    ~WithCallbackMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::chat::Message>* NewUserConnect(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::FirstConnect* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetUserList() {
      ::grpc::Service::MarkMethodCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::chat::Close, ::chat::UserList>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::chat::Close* request) { return this->GetUserList(context, request); }));
    }
    ~WithCallbackMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::chat::UserList>* GetUserList(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::Close* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithCallbackMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_Broadcast() {
      ::grpc::Service::MarkMethodCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::chat::Message, ::chat::Close>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::chat::Message* request, ::chat::Close* response) { return this->Broadcast(context, request, response); }));}
    void SetMessageAllocatorFor_Broadcast(
        ::grpc::MessageAllocator< ::chat::Message, ::chat::Close>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(2);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::chat::Message, ::chat::Close>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Broadcast(
      ::grpc::CallbackServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_NewUserConnect<WithCallbackMethod_GetUserList<WithCallbackMethod_Broadcast<Service > > > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetUserList() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Broadcast() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestNewUserConnect(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetUserList() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetUserList(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(1, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Broadcast() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestBroadcast(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->NewUserConnect(context, request); }));
    }
    ~WithRawCallbackMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* NewUserConnect(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetUserList() {
      ::grpc::Service::MarkMethodRawCallback(1,
          new ::grpc::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const::grpc::ByteBuffer* request) { return this->GetUserList(context, request); }));
    }
    ~WithRawCallbackMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* GetUserList(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_Broadcast() {
      ::grpc::Service::MarkMethodRawCallback(2,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->Broadcast(context, request, response); }));
    }
    ~WithRawCallbackMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* Broadcast(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Broadcast : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_Broadcast() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler<
          ::chat::Message, ::chat::Close>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::chat::Message, ::chat::Close>* streamer) {
                       return this->StreamedBroadcast(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_Broadcast() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Broadcast(::grpc::ServerContext* /*context*/, const ::chat::Message* /*request*/, ::chat::Close* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedBroadcast(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::chat::Message,::chat::Close>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Broadcast<Service > StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_NewUserConnect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_NewUserConnect() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::chat::FirstConnect, ::chat::Message>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::chat::FirstConnect, ::chat::Message>* streamer) {
                       return this->StreamedNewUserConnect(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_NewUserConnect() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status NewUserConnect(::grpc::ServerContext* /*context*/, const ::chat::FirstConnect* /*request*/, ::grpc::ServerWriter< ::chat::Message>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedNewUserConnect(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::chat::FirstConnect,::chat::Message>* server_split_streamer) = 0;
  };
  template <class BaseClass>
  class WithSplitStreamingMethod_GetUserList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_GetUserList() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::SplitServerStreamingHandler<
          ::chat::Close, ::chat::UserList>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerSplitStreamer<
                     ::chat::Close, ::chat::UserList>* streamer) {
                       return this->StreamedGetUserList(context,
                         streamer);
                  }));
    }
    ~WithSplitStreamingMethod_GetUserList() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetUserList(::grpc::ServerContext* /*context*/, const ::chat::Close* /*request*/, ::grpc::ServerWriter< ::chat::UserList>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedGetUserList(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::chat::Close,::chat::UserList>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_NewUserConnect<WithSplitStreamingMethod_GetUserList<Service > > SplitStreamedService;
  typedef WithSplitStreamingMethod_NewUserConnect<WithSplitStreamingMethod_GetUserList<WithStreamedUnaryMethod_Broadcast<Service > > > StreamedService;
};

}  // namespace chat


#endif  // GRPC_basic_2eproto__INCLUDED
