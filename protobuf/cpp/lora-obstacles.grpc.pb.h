// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: lora-obstacles.proto
#ifndef GRPC_lora_2dobstacles_2eproto__INCLUDED
#define GRPC_lora_2dobstacles_2eproto__INCLUDED

#include "lora-obstacles.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace vutura {
namespace obstacles {

class TagsService final {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetTags(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::vutura::obstacles::TagsResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::TagsResponse>> AsyncGetTags(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::TagsResponse>>(AsyncGetTagsRaw(context, request, cq));
    }
    virtual ::grpc::Status SetTag(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncSetTag(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncSetTagRaw(context, request, cq));
    }
    virtual ::grpc::Status GetWarnings(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::vutura::obstacles::CollisionWarnings* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::CollisionWarnings>> AsyncGetWarnings(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::CollisionWarnings>>(AsyncGetWarningsRaw(context, request, cq));
    }
    virtual ::grpc::Status SetWarning(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::google::protobuf::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>> AsyncSetWarning(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>>(AsyncSetWarningRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::TagsResponse>* AsyncGetTagsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncSetTagRaw(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::vutura::obstacles::CollisionWarnings>* AsyncGetWarningsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::protobuf::Empty>* AsyncSetWarningRaw(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status GetTags(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::vutura::obstacles::TagsResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::TagsResponse>> AsyncGetTags(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::TagsResponse>>(AsyncGetTagsRaw(context, request, cq));
    }
    ::grpc::Status SetTag(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncSetTag(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncSetTagRaw(context, request, cq));
    }
    ::grpc::Status GetWarnings(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::vutura::obstacles::CollisionWarnings* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::CollisionWarnings>> AsyncGetWarnings(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::CollisionWarnings>>(AsyncGetWarningsRaw(context, request, cq));
    }
    ::grpc::Status SetWarning(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::google::protobuf::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>> AsyncSetWarning(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>>(AsyncSetWarningRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::TagsResponse>* AsyncGetTagsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncSetTagRaw(::grpc::ClientContext* context, const ::vutura::obstacles::Obstacle& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::vutura::obstacles::CollisionWarnings>* AsyncGetWarningsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AsyncSetWarningRaw(::grpc::ClientContext* context, const ::vutura::obstacles::CollisionWarning& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::RpcMethod rpcmethod_GetTags_;
    const ::grpc::RpcMethod rpcmethod_SetTag_;
    const ::grpc::RpcMethod rpcmethod_GetWarnings_;
    const ::grpc::RpcMethod rpcmethod_SetWarning_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetTags(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::TagsResponse* response);
    virtual ::grpc::Status SetTag(::grpc::ServerContext* context, const ::vutura::obstacles::Obstacle* request, ::google::protobuf::Empty* response);
    virtual ::grpc::Status GetWarnings(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::CollisionWarnings* response);
    virtual ::grpc::Status SetWarning(::grpc::ServerContext* context, const ::vutura::obstacles::CollisionWarning* request, ::google::protobuf::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTags : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetTags() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GetTags() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTags(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::TagsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTags(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::vutura::obstacles::TagsResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetTag : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SetTag() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_SetTag() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetTag(::grpc::ServerContext* context, const ::vutura::obstacles::Obstacle* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetTag(::grpc::ServerContext* context, ::vutura::obstacles::Obstacle* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetWarnings : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_GetWarnings() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetWarnings() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWarnings(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::CollisionWarnings* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetWarnings(::grpc::ServerContext* context, ::google::protobuf::Empty* request, ::grpc::ServerAsyncResponseWriter< ::vutura::obstacles::CollisionWarnings>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SetWarning : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_SetWarning() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_SetWarning() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetWarning(::grpc::ServerContext* context, const ::vutura::obstacles::CollisionWarning* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetWarning(::grpc::ServerContext* context, ::vutura::obstacles::CollisionWarning* request, ::grpc::ServerAsyncResponseWriter< ::google::protobuf::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetTags<WithAsyncMethod_SetTag<WithAsyncMethod_GetWarnings<WithAsyncMethod_SetWarning<Service > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_GetTags : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetTags() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetTags() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTags(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::TagsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetTag : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SetTag() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_SetTag() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetTag(::grpc::ServerContext* context, const ::vutura::obstacles::Obstacle* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetWarnings : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_GetWarnings() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetWarnings() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetWarnings(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::CollisionWarnings* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SetWarning : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_SetWarning() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_SetWarning() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetWarning(::grpc::ServerContext* context, const ::vutura::obstacles::CollisionWarning* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetTags : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetTags() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::StreamedUnaryHandler< ::google::protobuf::Empty, ::vutura::obstacles::TagsResponse>(std::bind(&WithStreamedUnaryMethod_GetTags<BaseClass>::StreamedGetTags, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetTags() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTags(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::TagsResponse* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetTags(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::vutura::obstacles::TagsResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetTag : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SetTag() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::StreamedUnaryHandler< ::vutura::obstacles::Obstacle, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_SetTag<BaseClass>::StreamedSetTag, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SetTag() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetTag(::grpc::ServerContext* context, const ::vutura::obstacles::Obstacle* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetTag(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::vutura::obstacles::Obstacle,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetWarnings : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_GetWarnings() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::StreamedUnaryHandler< ::google::protobuf::Empty, ::vutura::obstacles::CollisionWarnings>(std::bind(&WithStreamedUnaryMethod_GetWarnings<BaseClass>::StreamedGetWarnings, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetWarnings() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetWarnings(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::vutura::obstacles::CollisionWarnings* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetWarnings(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::google::protobuf::Empty,::vutura::obstacles::CollisionWarnings>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_SetWarning : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_SetWarning() {
      ::grpc::Service::MarkMethodStreamed(3,
        new ::grpc::StreamedUnaryHandler< ::vutura::obstacles::CollisionWarning, ::google::protobuf::Empty>(std::bind(&WithStreamedUnaryMethod_SetWarning<BaseClass>::StreamedSetWarning, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_SetWarning() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status SetWarning(::grpc::ServerContext* context, const ::vutura::obstacles::CollisionWarning* request, ::google::protobuf::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedSetWarning(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::vutura::obstacles::CollisionWarning,::google::protobuf::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetTags<WithStreamedUnaryMethod_SetTag<WithStreamedUnaryMethod_GetWarnings<WithStreamedUnaryMethod_SetWarning<Service > > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetTags<WithStreamedUnaryMethod_SetTag<WithStreamedUnaryMethod_GetWarnings<WithStreamedUnaryMethod_SetWarning<Service > > > > StreamedService;
};

}  // namespace obstacles
}  // namespace vutura


#endif  // GRPC_lora_2dobstacles_2eproto__INCLUDED
