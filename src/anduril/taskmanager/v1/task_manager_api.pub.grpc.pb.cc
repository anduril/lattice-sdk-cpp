// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: anduril/taskmanager/v1/task_manager_api.pub.proto

#include "anduril/taskmanager/v1/task_manager_api.pub.pb.h"
#include "anduril/taskmanager/v1/task_manager_api.pub.grpc.pb.h"

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
namespace taskmanager {
namespace v1 {

static const char* TaskManagerAPI_method_names[] = {
  "/anduril.taskmanager.v1.TaskManagerAPI/CreateTask",
  "/anduril.taskmanager.v1.TaskManagerAPI/GetTask",
  "/anduril.taskmanager.v1.TaskManagerAPI/QueryTasks",
  "/anduril.taskmanager.v1.TaskManagerAPI/UpdateStatus",
  "/anduril.taskmanager.v1.TaskManagerAPI/ListenAsAgent",
};

std::unique_ptr< TaskManagerAPI::Stub> TaskManagerAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< TaskManagerAPI::Stub> stub(new TaskManagerAPI::Stub(channel, options));
  return stub;
}

TaskManagerAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CreateTask_(TaskManagerAPI_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetTask_(TaskManagerAPI_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_QueryTasks_(TaskManagerAPI_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateStatus_(TaskManagerAPI_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ListenAsAgent_(TaskManagerAPI_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status TaskManagerAPI::Stub::CreateTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest& request, ::anduril::taskmanager::v1::CreateTaskResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::taskmanager::v1::CreateTaskRequest, ::anduril::taskmanager::v1::CreateTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CreateTask_, context, request, response);
}

void TaskManagerAPI::Stub::async::CreateTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest* request, ::anduril::taskmanager::v1::CreateTaskResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::taskmanager::v1::CreateTaskRequest, ::anduril::taskmanager::v1::CreateTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateTask_, context, request, response, std::move(f));
}

void TaskManagerAPI::Stub::async::CreateTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest* request, ::anduril::taskmanager::v1::CreateTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CreateTask_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::CreateTaskResponse>* TaskManagerAPI::Stub::PrepareAsyncCreateTaskRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::taskmanager::v1::CreateTaskResponse, ::anduril::taskmanager::v1::CreateTaskRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CreateTask_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::CreateTaskResponse>* TaskManagerAPI::Stub::AsyncCreateTaskRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateTaskRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TaskManagerAPI::Stub::GetTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::GetTaskRequest& request, ::anduril::taskmanager::v1::GetTaskResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::taskmanager::v1::GetTaskRequest, ::anduril::taskmanager::v1::GetTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetTask_, context, request, response);
}

void TaskManagerAPI::Stub::async::GetTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::GetTaskRequest* request, ::anduril::taskmanager::v1::GetTaskResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::taskmanager::v1::GetTaskRequest, ::anduril::taskmanager::v1::GetTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTask_, context, request, response, std::move(f));
}

void TaskManagerAPI::Stub::async::GetTask(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::GetTaskRequest* request, ::anduril::taskmanager::v1::GetTaskResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetTask_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::GetTaskResponse>* TaskManagerAPI::Stub::PrepareAsyncGetTaskRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::GetTaskRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::taskmanager::v1::GetTaskResponse, ::anduril::taskmanager::v1::GetTaskRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetTask_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::GetTaskResponse>* TaskManagerAPI::Stub::AsyncGetTaskRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::GetTaskRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetTaskRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TaskManagerAPI::Stub::QueryTasks(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest& request, ::anduril::taskmanager::v1::QueryTasksResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::taskmanager::v1::QueryTasksRequest, ::anduril::taskmanager::v1::QueryTasksResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_QueryTasks_, context, request, response);
}

void TaskManagerAPI::Stub::async::QueryTasks(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest* request, ::anduril::taskmanager::v1::QueryTasksResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::taskmanager::v1::QueryTasksRequest, ::anduril::taskmanager::v1::QueryTasksResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_QueryTasks_, context, request, response, std::move(f));
}

void TaskManagerAPI::Stub::async::QueryTasks(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest* request, ::anduril::taskmanager::v1::QueryTasksResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_QueryTasks_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::QueryTasksResponse>* TaskManagerAPI::Stub::PrepareAsyncQueryTasksRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::taskmanager::v1::QueryTasksResponse, ::anduril::taskmanager::v1::QueryTasksRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_QueryTasks_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::QueryTasksResponse>* TaskManagerAPI::Stub::AsyncQueryTasksRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncQueryTasksRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status TaskManagerAPI::Stub::UpdateStatus(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest& request, ::anduril::taskmanager::v1::UpdateStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::anduril::taskmanager::v1::UpdateStatusRequest, ::anduril::taskmanager::v1::UpdateStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_UpdateStatus_, context, request, response);
}

void TaskManagerAPI::Stub::async::UpdateStatus(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest* request, ::anduril::taskmanager::v1::UpdateStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::anduril::taskmanager::v1::UpdateStatusRequest, ::anduril::taskmanager::v1::UpdateStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateStatus_, context, request, response, std::move(f));
}

void TaskManagerAPI::Stub::async::UpdateStatus(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest* request, ::anduril::taskmanager::v1::UpdateStatusResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_UpdateStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::UpdateStatusResponse>* TaskManagerAPI::Stub::PrepareAsyncUpdateStatusRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::anduril::taskmanager::v1::UpdateStatusResponse, ::anduril::taskmanager::v1::UpdateStatusRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_UpdateStatus_, context, request);
}

::grpc::ClientAsyncResponseReader< ::anduril::taskmanager::v1::UpdateStatusResponse>* TaskManagerAPI::Stub::AsyncUpdateStatusRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::anduril::taskmanager::v1::ListenAsAgentResponse>* TaskManagerAPI::Stub::ListenAsAgentRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::ListenAsAgentRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::anduril::taskmanager::v1::ListenAsAgentResponse>::Create(channel_.get(), rpcmethod_ListenAsAgent_, context, request);
}

void TaskManagerAPI::Stub::async::ListenAsAgent(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::ListenAsAgentRequest* request, ::grpc::ClientReadReactor< ::anduril::taskmanager::v1::ListenAsAgentResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::anduril::taskmanager::v1::ListenAsAgentResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_ListenAsAgent_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::anduril::taskmanager::v1::ListenAsAgentResponse>* TaskManagerAPI::Stub::AsyncListenAsAgentRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::ListenAsAgentRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::anduril::taskmanager::v1::ListenAsAgentResponse>::Create(channel_.get(), cq, rpcmethod_ListenAsAgent_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::anduril::taskmanager::v1::ListenAsAgentResponse>* TaskManagerAPI::Stub::PrepareAsyncListenAsAgentRaw(::grpc::ClientContext* context, const ::anduril::taskmanager::v1::ListenAsAgentRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::anduril::taskmanager::v1::ListenAsAgentResponse>::Create(channel_.get(), cq, rpcmethod_ListenAsAgent_, context, request, false, nullptr);
}

TaskManagerAPI::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TaskManagerAPI_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TaskManagerAPI::Service, ::anduril::taskmanager::v1::CreateTaskRequest, ::anduril::taskmanager::v1::CreateTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TaskManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::taskmanager::v1::CreateTaskRequest* req,
             ::anduril::taskmanager::v1::CreateTaskResponse* resp) {
               return service->CreateTask(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TaskManagerAPI_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TaskManagerAPI::Service, ::anduril::taskmanager::v1::GetTaskRequest, ::anduril::taskmanager::v1::GetTaskResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TaskManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::taskmanager::v1::GetTaskRequest* req,
             ::anduril::taskmanager::v1::GetTaskResponse* resp) {
               return service->GetTask(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TaskManagerAPI_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TaskManagerAPI::Service, ::anduril::taskmanager::v1::QueryTasksRequest, ::anduril::taskmanager::v1::QueryTasksResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TaskManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::taskmanager::v1::QueryTasksRequest* req,
             ::anduril::taskmanager::v1::QueryTasksResponse* resp) {
               return service->QueryTasks(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TaskManagerAPI_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< TaskManagerAPI::Service, ::anduril::taskmanager::v1::UpdateStatusRequest, ::anduril::taskmanager::v1::UpdateStatusResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](TaskManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::taskmanager::v1::UpdateStatusRequest* req,
             ::anduril::taskmanager::v1::UpdateStatusResponse* resp) {
               return service->UpdateStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      TaskManagerAPI_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< TaskManagerAPI::Service, ::anduril::taskmanager::v1::ListenAsAgentRequest, ::anduril::taskmanager::v1::ListenAsAgentResponse>(
          [](TaskManagerAPI::Service* service,
             ::grpc::ServerContext* ctx,
             const ::anduril::taskmanager::v1::ListenAsAgentRequest* req,
             ::grpc::ServerWriter<::anduril::taskmanager::v1::ListenAsAgentResponse>* writer) {
               return service->ListenAsAgent(ctx, req, writer);
             }, this)));
}

TaskManagerAPI::Service::~Service() {
}

::grpc::Status TaskManagerAPI::Service::CreateTask(::grpc::ServerContext* context, const ::anduril::taskmanager::v1::CreateTaskRequest* request, ::anduril::taskmanager::v1::CreateTaskResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TaskManagerAPI::Service::GetTask(::grpc::ServerContext* context, const ::anduril::taskmanager::v1::GetTaskRequest* request, ::anduril::taskmanager::v1::GetTaskResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TaskManagerAPI::Service::QueryTasks(::grpc::ServerContext* context, const ::anduril::taskmanager::v1::QueryTasksRequest* request, ::anduril::taskmanager::v1::QueryTasksResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TaskManagerAPI::Service::UpdateStatus(::grpc::ServerContext* context, const ::anduril::taskmanager::v1::UpdateStatusRequest* request, ::anduril::taskmanager::v1::UpdateStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status TaskManagerAPI::Service::ListenAsAgent(::grpc::ServerContext* context, const ::anduril::taskmanager::v1::ListenAsAgentRequest* request, ::grpc::ServerWriter< ::anduril::taskmanager::v1::ListenAsAgentResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace anduril
}  // namespace taskmanager
}  // namespace v1
