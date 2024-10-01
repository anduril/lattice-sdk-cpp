// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: anduril/entitymanager/v1/entity_manager_api.pub.proto

#include "anduril/entitymanager/v1/entity_manager_api.pub.pb.h"
#include "anduril/entitymanager/v1/entity_manager_api.pub.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace anduril {
namespace entitymanager {
namespace v1 {

static const char* EntityManagerAPI_method_names[] = {
  "/anduril.entitymanager.v1.EntityManagerAPI/PublishEntity",
  "/anduril.entitymanager.v1.EntityManagerAPI/PublishEntities",
  "/anduril.entitymanager.v1.EntityManagerAPI/GetEntity",
  "/anduril.entitymanager.v1.EntityManagerAPI/OverrideEntity",
  "/anduril.entitymanager.v1.EntityManagerAPI/RemoveEntityOverride",
  "/anduril.entitymanager.v1.EntityManagerAPI/StreamEntityComponents",
};

std::unique_ptr< EntityManagerAPI::Stub> EntityManagerAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EntityManagerAPI::Stub> stub(new EntityManagerAPI::Stub(channel, options));
  return stub;
}

EntityManagerAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_PublishEntity_(EntityManagerAPI_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PublishEntities_(EntityManagerAPI_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::CLIENT_STREAMING, channel)
  , rpcmethod_GetEntity_(EntityManagerAPI_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_OverrideEntity_(EntityManagerAPI_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemoveEntityOverride_(EntityManagerAPI_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_StreamEntityComponents_(EntityManagerAPI_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status EntityManagerAPI::Stub::PublishEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest& request, ::anduril::entitymanager::v1::PublishEntityResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::entitymanager::v1::PublishEntityRequest, ::anduril::entitymanager::v1::PublishEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PublishEntity_, context, request, response);
}

void EntityManagerAPI::Stub::async::PublishEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest* request, ::anduril::entitymanager::v1::PublishEntityResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::entitymanager::v1::PublishEntityRequest, ::anduril::entitymanager::v1::PublishEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PublishEntity_, context, request, response, std::move(f));
}

void EntityManagerAPI::Stub::async::PublishEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest* request, ::anduril::entitymanager::v1::PublishEntityResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PublishEntity_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::PublishEntityResponse>* EntityManagerAPI::Stub::PrepareAsyncPublishEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::entitymanager::v1::PublishEntityResponse, ::anduril::entitymanager::v1::PublishEntityRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PublishEntity_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::PublishEntityResponse>* EntityManagerAPI::Stub::AsyncPublishEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPublishEntityRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientWriter< ::anduril::entitymanager::v1::PublishEntitiesRequest>* EntityManagerAPI::Stub::PublishEntitiesRaw(::grpc::ClientContext* context, ::anduril::entitymanager::v1::PublishEntitiesResponse* response) {
  return ::grpc::internal::ClientWriterFactory< ::anduril::entitymanager::v1::PublishEntitiesRequest>::Create(channel_.get(), rpcmethod_PublishEntities_, context, response);
}

void EntityManagerAPI::Stub::async::PublishEntities(::grpc::ClientContext* context, ::anduril::entitymanager::v1::PublishEntitiesResponse* response, ::grpc::ClientWriteReactor< ::anduril::entitymanager::v1::PublishEntitiesRequest>* reactor) {
  ::grpc::internal::ClientCallbackWriterFactory< ::anduril::entitymanager::v1::PublishEntitiesRequest>::Create(stub_->channel_.get(), stub_->rpcmethod_PublishEntities_, context, response, reactor);
}

::grpc::ClientAsyncWriter< ::anduril::entitymanager::v1::PublishEntitiesRequest>* EntityManagerAPI::Stub::AsyncPublishEntitiesRaw(::grpc::ClientContext* context, ::anduril::entitymanager::v1::PublishEntitiesResponse* response, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::anduril::entitymanager::v1::PublishEntitiesRequest>::Create(channel_.get(), cq, rpcmethod_PublishEntities_, context, response, true, tag);
}

::grpc::ClientAsyncWriter< ::anduril::entitymanager::v1::PublishEntitiesRequest>* EntityManagerAPI::Stub::PrepareAsyncPublishEntitiesRaw(::grpc::ClientContext* context, ::anduril::entitymanager::v1::PublishEntitiesResponse* response, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncWriterFactory< ::anduril::entitymanager::v1::PublishEntitiesRequest>::Create(channel_.get(), cq, rpcmethod_PublishEntities_, context, response, false, nullptr);
}

::grpc::Status EntityManagerAPI::Stub::GetEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::GetEntityRequest& request, ::anduril::entitymanager::v1::GetEntityResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::entitymanager::v1::GetEntityRequest, ::anduril::entitymanager::v1::GetEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetEntity_, context, request, response);
}

void EntityManagerAPI::Stub::async::GetEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::GetEntityRequest* request, ::anduril::entitymanager::v1::GetEntityResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::entitymanager::v1::GetEntityRequest, ::anduril::entitymanager::v1::GetEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetEntity_, context, request, response, std::move(f));
}

void EntityManagerAPI::Stub::async::GetEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::GetEntityRequest* request, ::anduril::entitymanager::v1::GetEntityResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetEntity_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::GetEntityResponse>* EntityManagerAPI::Stub::PrepareAsyncGetEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::GetEntityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::entitymanager::v1::GetEntityResponse, ::anduril::entitymanager::v1::GetEntityRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetEntity_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::GetEntityResponse>* EntityManagerAPI::Stub::AsyncGetEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::GetEntityRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetEntityRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EntityManagerAPI::Stub::OverrideEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest& request, ::anduril::entitymanager::v1::OverrideEntityResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::entitymanager::v1::OverrideEntityRequest, ::anduril::entitymanager::v1::OverrideEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_OverrideEntity_, context, request, response);
}

void EntityManagerAPI::Stub::async::OverrideEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest* request, ::anduril::entitymanager::v1::OverrideEntityResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::entitymanager::v1::OverrideEntityRequest, ::anduril::entitymanager::v1::OverrideEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_OverrideEntity_, context, request, response, std::move(f));
}

void EntityManagerAPI::Stub::async::OverrideEntity(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest* request, ::anduril::entitymanager::v1::OverrideEntityResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_OverrideEntity_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::OverrideEntityResponse>* EntityManagerAPI::Stub::PrepareAsyncOverrideEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::entitymanager::v1::OverrideEntityResponse, ::anduril::entitymanager::v1::OverrideEntityRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_OverrideEntity_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::OverrideEntityResponse>* EntityManagerAPI::Stub::AsyncOverrideEntityRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncOverrideEntityRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EntityManagerAPI::Stub::RemoveEntityOverride(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest& request, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::entitymanager::v1::RemoveEntityOverrideRequest, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_RemoveEntityOverride_, context, request, response);
}

void EntityManagerAPI::Stub::async::RemoveEntityOverride(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest* request, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::entitymanager::v1::RemoveEntityOverrideRequest, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveEntityOverride_, context, request, response, std::move(f));
}

void EntityManagerAPI::Stub::async::RemoveEntityOverride(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest* request, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_RemoveEntityOverride_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::RemoveEntityOverrideResponse>* EntityManagerAPI::Stub::PrepareAsyncRemoveEntityOverrideRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::entitymanager::v1::RemoveEntityOverrideResponse, ::anduril::entitymanager::v1::RemoveEntityOverrideRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_RemoveEntityOverride_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::entitymanager::v1::RemoveEntityOverrideResponse>* EntityManagerAPI::Stub::AsyncRemoveEntityOverrideRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRemoveEntityOverrideRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>* EntityManagerAPI::Stub::StreamEntityComponentsRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::StreamEntityComponentsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>::Create(channel_.get(), rpcmethod_StreamEntityComponents_, context, request);
}

void EntityManagerAPI::Stub::async::StreamEntityComponents(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::StreamEntityComponentsRequest* request, ::grpc::ClientReadReactor< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_StreamEntityComponents_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>* EntityManagerAPI::Stub::AsyncStreamEntityComponentsRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::StreamEntityComponentsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>::Create(channel_.get(), cq, rpcmethod_StreamEntityComponents_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>* EntityManagerAPI::Stub::PrepareAsyncStreamEntityComponentsRaw(::grpc::ClientContext* context, const ::anduril::entitymanager::v1::StreamEntityComponentsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>::Create(channel_.get(), cq, rpcmethod_StreamEntityComponents_, context, request, false, nullptr);
}

EntityManagerAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::PublishEntityRequest, ::anduril::entitymanager::v1::PublishEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::entitymanager::v1::PublishEntityRequest* req,
             ::anduril::entitymanager::v1::PublishEntityResponse* resp) {
               return service->PublishEntity(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[1],
      ::grpc::internal::RpcMethod::CLIENT_STREAMING,
      new ::grpc::internal::ClientStreamingHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::PublishEntitiesRequest, ::anduril::entitymanager::v1::PublishEntitiesResponse>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReader<::anduril::entitymanager::v1::PublishEntitiesRequest>* reader,
             ::anduril::entitymanager::v1::PublishEntitiesResponse* resp) {
               return service->PublishEntities(ctx, reader, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::GetEntityRequest, ::anduril::entitymanager::v1::GetEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::entitymanager::v1::GetEntityRequest* req,
             ::anduril::entitymanager::v1::GetEntityResponse* resp) {
               return service->GetEntity(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::OverrideEntityRequest, ::anduril::entitymanager::v1::OverrideEntityResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::entitymanager::v1::OverrideEntityRequest* req,
             ::anduril::entitymanager::v1::OverrideEntityResponse* resp) {
               return service->OverrideEntity(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::RemoveEntityOverrideRequest, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest* req,
             ::anduril::entitymanager::v1::RemoveEntityOverrideResponse* resp) {
               return service->RemoveEntityOverride(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EntityManagerAPI_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< EntityManagerAPI::Service, ::anduril::entitymanager::v1::StreamEntityComponentsRequest, ::anduril::entitymanager::v1::StreamEntityComponentsResponse>(
          [](EntityManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::entitymanager::v1::StreamEntityComponentsRequest* req,
             ::grpc::ServerWriter<::anduril::entitymanager::v1::StreamEntityComponentsResponse>* writer) {
               return service->StreamEntityComponents(ctx, req, writer);
             }, this)));
}

EntityManagerAPI::Service::~Service() {
}

::grpc::Status EntityManagerAPI::Service::PublishEntity(::grpc::ServerContext* context, const ::anduril::entitymanager::v1::PublishEntityRequest* request, ::anduril::entitymanager::v1::PublishEntityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityManagerAPI::Service::PublishEntities(::grpc::ServerContext* context, ::grpc::ServerReader< ::anduril::entitymanager::v1::PublishEntitiesRequest>* reader, ::anduril::entitymanager::v1::PublishEntitiesResponse* response) {
  (void) context;
  (void) reader;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityManagerAPI::Service::GetEntity(::grpc::ServerContext* context, const ::anduril::entitymanager::v1::GetEntityRequest* request, ::anduril::entitymanager::v1::GetEntityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityManagerAPI::Service::OverrideEntity(::grpc::ServerContext* context, const ::anduril::entitymanager::v1::OverrideEntityRequest* request, ::anduril::entitymanager::v1::OverrideEntityResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityManagerAPI::Service::RemoveEntityOverride(::grpc::ServerContext* context, const ::anduril::entitymanager::v1::RemoveEntityOverrideRequest* request, ::anduril::entitymanager::v1::RemoveEntityOverrideResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EntityManagerAPI::Service::StreamEntityComponents(::grpc::ServerContext* context, const ::anduril::entitymanager::v1::StreamEntityComponentsRequest* request, ::grpc::ServerWriter< ::anduril::entitymanager::v1::StreamEntityComponentsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace anduril
}  // namespace entitymanager
}  // namespace v1

