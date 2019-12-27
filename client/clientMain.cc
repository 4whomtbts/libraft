//
// Created by hj on 19. 12. 27..
//
#include <iostream>
#include <fstream>
#include <string>
#include <grpcpp/grpcpp.h>
#include <client/StudentClient.cc>

int main() {
    StudentClient client(grpc::CreateChannel(
            "127.0.0.1:8080", grpc::InsecureChannelCredentials()));
    std::string student("world");
    std::string reply = client.sendStudent(student);
    std::cout << "Student received: " << reply << std::endl;
}