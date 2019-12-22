cmake_minimum_required(VERSION 3.15)
project(libRaft)
SET(CMAKE_CXX_FLAGS "-g -Wall -Werror -std=c++11")
SET (_PROTOBUF_PROTOC $<TARGET_FILE:protoc>)
SET (student_grpc_srcs "${CMAKE_CURRENT_BINARY_DIR}/Student.grpc.pb.cc")
SET (student_grpc_hdrs "${CMAKE_CURRENT_BINARY_DIR}/Student.grpc.pb.h")



find_package(Protobuf REQUIRED)
find_package(gRPC CONFIG REQUIRED)

message(STATUS "Using gRPC ${gRPC_VERSION}")
set(_GRPC_GRPCPP_UNSECURE gRPC::grpc++_unsecure)
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)

if(PROTOBUF_FOUND)
    message ("PROTOBUF IS FOUND")
endif()

PROTOBUF_GENERATE_CPP(PROTO_SRCS PROTO_HDRS proto/Student.proto)

ADD_CUSTOM_COMMAND(
        OUTPUT "${PROTO_SRCS}" "${PROTO_HDRS}"
                "${student_grpc_src}" "${student_grpc_hdrs}"
        COMMAND ${_PROTOBUF_PROTOC}
        ARGS --grpc-out "${CMAKE_CURRENT_BINARY_DIR}"
            --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
            -I "${CMAKE_CURRENT_BINARY_DIR}"
            --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
            "${CMAKE_CURRENT_BINARY_DIR}"
        DEPENDS "${CMAKE_CURRENT_BINARY_DIR}")


MESSAGE ("PROTO_SRCS = ${PROTO_SRCS}")
MESSAGE ("PROTO_HDRS = ${PROTO_HDRS}")

ADD_EXECUTABLE(libraft main.cpp ${PROTO_SRCS} ${PROTO_HDRS} server/StudentServer.cc server/StudentServer.h)

TARGET_INCLUDE_DIRECTORIES(libraft
        PUBLIC
        ${PROTOBUF_INCLUDE_DIRS}
        ${CMAKE_CURRENT_BINARY_DIR})

TARGET_LINK_LIBRARIES(libraft
        PUBLIC
        ${PROTOBUF_LIBRARIES})