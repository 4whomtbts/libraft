// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: Student.proto
#ifndef GRPC_Student_2eproto__INCLUDED
#define GRPC_Student_2eproto__INCLUDED

#include "Student.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
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

namespace student {

class StudentService final {
 public:
  static constexpr char const* service_full_name() {
    return "student.StudentService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status sendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::student::Reply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>> AsyncsendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>>(AsyncsendStudentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>> PrepareAsyncsendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>>(PrepareAsyncsendStudentRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>* AsyncsendStudentRaw(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::student::Reply>* PrepareAsyncsendStudentRaw(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status sendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::student::Reply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::student::Reply>> AsyncsendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::student::Reply>>(AsyncsendStudentRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::student::Reply>> PrepareAsyncsendStudent(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::student::Reply>>(PrepareAsyncsendStudentRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, std::function<void(::grpc::Status)>) override;
      void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void sendStudent(::grpc::ClientContext* context, const ::student::Student* request, ::student::Reply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void sendStudent(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::student::Reply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::student::Reply>* AsyncsendStudentRaw(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::student::Reply>* PrepareAsyncsendStudentRaw(::grpc::ClientContext* context, const ::student::Student& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_sendStudent_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status sendStudent(::grpc::ServerContext* context, const ::student::Student* request, ::student::Reply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_sendStudent() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendStudent(::grpc::ServerContext* context, ::student::Student* request, ::grpc::ServerAsyncResponseWriter< ::student::Reply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_sendStudent<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_sendStudent() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::student::Student, ::student::Reply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::student::Student* request, ::student::Reply* response) { return this->sendStudent(context, request, response); }));}
    void SetMessageAllocatorFor_sendStudent(
        ::grpc::experimental::MessageAllocator< ::student::Student, ::student::Reply>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::student::Student, ::student::Reply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* sendStudent(
      ::grpc::CallbackServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* sendStudent(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_sendStudent<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_sendStudent<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_sendStudent() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_sendStudent() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendStudent(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_sendStudent() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->sendStudent(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* sendStudent(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* sendStudent(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_sendStudent : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_sendStudent() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::student::Student, ::student::Reply>(std::bind(&WithStreamedUnaryMethod_sendStudent<BaseClass>::StreamedsendStudent, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_sendStudent() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status sendStudent(::grpc::ServerContext* /*context*/, const ::student::Student* /*request*/, ::student::Reply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsendStudent(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::student::Student,::student::Reply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_sendStudent<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_sendStudent<Service > StreamedService;
};

}  // namespace student


#endif  // GRPC_Student_2eproto__INCLUDED