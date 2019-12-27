#include <ios>
#include <iostream>
#include <fstream>
#include <string>
#include <grpcpp/grpcpp.h>
//#include "server/Student.pb.h"
#include <server/StudentServer.cc>
#include <client/StudentClient.cc>

void RunServer() {
    std::string server_address("127.0.0.1:8080");
    StudentServerImpl service;

    ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "Server listening on " << server_address << std::endl;
    server->Wait();

}

int main() {

    RunServer();



    return 0;
}