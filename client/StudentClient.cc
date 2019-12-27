//
// Created by hj on 19. 12. 27..
//
#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>
#include <proto-gen/Student.pb.h>
#include <proto-gen/Student.grpc.pb.h>

using grpc::Channel;
using grpc::ClientAsyncReader;
using grpc::ClientContext;
using grpc::CompletionQueue;
using grpc::Status;
using student::Student;
using student::Reply;
using student::StudentService;


class StudentClient {
public:
    explicit StudentClient(std::shared_ptr<Channel> channel)
        : stub_(StudentService::NewStub(channel)) {}

    std::string sendStudent(const std::string& student) {
        Student request;
        request.set_name(student);

        Reply reply;
        ClientContext context;
        CompletionQueue cq;

        Status status = stub_->sendStudent(&context, request, &reply);

        if(status.ok()) {
            return reply.message();
        } else {
            std::cout << status.error_code() << ": " <<status.error_message()
            <<std::endl;
            return "RPC failed";
        }
    }

private:
    std::unique_ptr<StudentService::Stub> stub_;
};