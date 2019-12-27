#include <grpcpp/grpcpp.h>
#include "proto-gen/Student.pb.h"
#include "proto-gen/Student.grpc.pb.h"

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using student::Student;
using student::Reply;
using student::StudentService;

class StudentServerImpl final : public StudentService::Service {
    Status sendStudent(ServerContext* context, const Student* studentReq,
            Reply* reply) override {
        std::string prefix("Bye ");
        reply->set_message(prefix + studentReq->name());
        return Status::OK;
    }
};
