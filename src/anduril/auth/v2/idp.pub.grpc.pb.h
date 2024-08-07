// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: anduril/auth/v2/idp.pub.proto
#ifndef GRPC_anduril_2fauth_2fv2_2fidp_2epub_2eproto__INCLUDED
#define GRPC_anduril_2fauth_2fv2_2fidp_2epub_2eproto__INCLUDED

#include "anduril/auth/v2/idp.pub.pb.h"

#include <functional>
#include <grpcpp/generic/async_generic_service.h>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/client_context.h>
#include <grpcpp/completion_queue.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/proto_utils.h>
#include <grpcpp/impl/rpc_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/status.h>
#include <grpcpp/support/stub_options.h>
#include <grpcpp/support/sync_stream.h>

namespace anduril {
namespace auth {
namespace v2 {

class Idps final {
 public:
  static constexpr char const* service_full_name() {
    return "anduril.auth.v2.Idps";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // GetSSOURL returns an identity provider's single sign on (SSO) URL which a user should be redirected to
    // authenticate. If no IDP can be located for the email's domain then a NotFound error is returned.
    virtual ::grpc::Status GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::anduril::auth::v2::GetSSOURLResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>> AsyncGetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>>(AsyncGetSSOURLRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>> PrepareAsyncGetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>>(PrepareAsyncGetSSOURLRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      // GetSSOURL returns an identity provider's single sign on (SSO) URL which a user should be redirected to
      // authenticate. If no IDP can be located for the email's domain then a NotFound error is returned.
      virtual void GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>* AsyncGetSSOURLRaw(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::anduril::auth::v2::GetSSOURLResponse>* PrepareAsyncGetSSOURLRaw(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::anduril::auth::v2::GetSSOURLResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>> AsyncGetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>>(AsyncGetSSOURLRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>> PrepareAsyncGetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>>(PrepareAsyncGetSSOURLRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response, std::function<void(::grpc::Status)>) override;
      void GetSSOURL(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>* AsyncGetSSOURLRaw(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::anduril::auth::v2::GetSSOURLResponse>* PrepareAsyncGetSSOURLRaw(::grpc::ClientContext* context, const ::anduril::auth::v2::GetSSOURLRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetSSOURL_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // GetSSOURL returns an identity provider's single sign on (SSO) URL which a user should be redirected to
    // authenticate. If no IDP can be located for the email's domain then a NotFound error is returned.
    virtual ::grpc::Status GetSSOURL(::grpc::ServerContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetSSOURL(::grpc::ServerContext* context, ::anduril::auth::v2::GetSSOURLRequest* request, ::grpc::ServerAsyncResponseWriter< ::anduril::auth::v2::GetSSOURLResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetSSOURL<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::anduril::auth::v2::GetSSOURLRequest, ::anduril::auth::v2::GetSSOURLResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::anduril::auth::v2::GetSSOURLRequest* request, ::anduril::auth::v2::GetSSOURLResponse* response) { return this->GetSSOURL(context, request, response); }));}
    void SetMessageAllocatorFor_GetSSOURL(
        ::grpc::MessageAllocator< ::anduril::auth::v2::GetSSOURLRequest, ::anduril::auth::v2::GetSSOURLResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::anduril::auth::v2::GetSSOURLRequest, ::anduril::auth::v2::GetSSOURLResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetSSOURL(
      ::grpc::CallbackServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GetSSOURL<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetSSOURL(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetSSOURL(context, request, response); }));
    }
    ~WithRawCallbackMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GetSSOURL(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetSSOURL : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetSSOURL() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::anduril::auth::v2::GetSSOURLRequest, ::anduril::auth::v2::GetSSOURLResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::anduril::auth::v2::GetSSOURLRequest, ::anduril::auth::v2::GetSSOURLResponse>* streamer) {
                       return this->StreamedGetSSOURL(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GetSSOURL() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetSSOURL(::grpc::ServerContext* /*context*/, const ::anduril::auth::v2::GetSSOURLRequest* /*request*/, ::anduril::auth::v2::GetSSOURLResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetSSOURL(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::anduril::auth::v2::GetSSOURLRequest,::anduril::auth::v2::GetSSOURLResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetSSOURL<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetSSOURL<Service > StreamedService;
};

}  // namespace v2
}  // namespace auth
}  // namespace anduril


#endif  // GRPC_anduril_2fauth_2fv2_2fidp_2epub_2eproto__INCLUDED