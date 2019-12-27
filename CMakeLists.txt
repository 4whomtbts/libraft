cmake_minimum_required(VERSION 3.5.1)
project(libRaft)
SET(CMAKE_CXX_FLAGS "-pthread -g -std=c++11")
SET (tp_grpc ${CMAKE_CURRENT_SOURCE_DIR}/third-party/grpc)
SET (proto_dir "${CMAKE_CURRENT_SOURCE_DIR}/proto")
SET(proto_gen_dir "${CMAKE_CURRENT_SOURCE_DIR}/proto-gen")

file(GLOB_RECURSE proto_files RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.proto)
# Absolute paths of .proto files to be passed to protoc program
set(ABSProtoFiles)
# Absolute paths of generated .h and .cc
set(ProtoHeaders)
set(ProtoSources)
include_directories(${ProtoHeaders})

ADD_SUBDIRECTORY(./third_party/grpc ${CMAKE_CURRENT_BINARY_DIR}/third_party/grpc EXCLUDE_FROM_ALL)

message(STATUS "Using gRPC via add_subdirectory.")

# After using add_subdirectory, we can now use the grpc targets directly from
# this build.
set(_PROTOBUF_LIBPROTOBUF libprotobuf)
set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)
set(_GRPC_GRPCPP_UNSECURE grpc++_unsecure)
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:grpc_cpp_plugin>)

get_filename_component(hw_proto "proto/helloworld.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)

LIST(APPEND proto_source_list)
LIST(APPEND proto_header_list)


set(student_proto_srcs "${proto_gen_dir}/Student.pb.cc")
set(student_proto_hdrs "${proto_gen_dir}/Student.pb.h")
set(student_grpc_srcs "${proto_gen_dir}/Student.grpc.pb.cc")
set(student_grpc_hdrs "${proto_gen_dir}/Student.grpc.pb.h")

get_filename_component(abs_proto "proto/Student.proto" ABSOLUTE)
get_filename_component(proto_path "${abs_proto}" PATH)

add_custom_command(
        OUTPUT "${student_proto_srcs}" "${student_proto_hdrs}"
        "${student_grpc_srcs}" "${student_grpc_hdrs}"
        COMMAND ${_PROTOBUF_PROTOC}
        ARGS --grpc_out "${proto_gen_dir}"
        --cpp_out "${proto_gen_dir}"
        -I "${proto_path}"
        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
        "${abs_proto}"
        DEPENDS "${abs_proto}")

include_directories("${CMAKE_CURRENT_BINARY_DIR}")

ADD_EXECUTABLE(
        libraft
        main.cpp
        server/StudentServer.cc
        ${student_proto_srcs}
        ${student_grpc_srcs}
)

SET_TARGET_PROPERTIES(libraft
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY build)

TARGET_INCLUDE_DIRECTORIES(libraft
        PUBLIC
        server
        client
        ${proto_gen_dir}
        ${CMAKE_CURRENT_BINARY_DIR})

TARGET_LINK_LIBRARIES(libraft
        PUBLIC
        ${_GRPC_GRPCPP_UNSECURE}
        ${_PROTOBUF_LIBPROTOBUF})

ADD_EXECUTABLE(libraft_client
        client/StudentClient.cc
        client/clientMain.cc
        ${student_proto_srcs}
        ${student_grpc_srcs})

TARGET_INCLUDE_DIRECTORIES(libraft_client
        PUBLIC
        client
        ${proto_gen_dir}
        ${CMAKE_CURRENT_BINARY_DIR})

TARGET_LINK_LIBRARIES(libraft_client
        PUBLIC
        ${_GRPC_GRPCPP_UNSECURE}
        ${_PROTOBUF_LIBPROTOBUF})





