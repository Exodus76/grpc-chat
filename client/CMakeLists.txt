# CMakeList.txt : CMake project for client, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("client")

if(CMAKE_TOOLCHAIN_FILE)
	include(${CMAKE_TOOLCHAIN_FILE})
endif(CMAKE_TOOLCHAIN_FILE)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


# Add source to this project's executable

# TODO: Add tests and install targets if needed.
set(protobuf_MODULE_COMPATIBLE TRUE)

find_package(protobuf CONFIG REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})
message(STATUS "Using protobuf ${protobuf_VERSION}")

set(_PROTOBUF_PROTOC $<TARGET_FILE:protobuf::protoc>)

find_package(gRPC CONFIG REQUIRED)
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(_GRPC_GRPCPP gRPC::grpc++)
set(_GRPC_CPP_PLUGIN_EXECUTABLE $<TARGET_FILE:gRPC::grpc_cpp_plugin>)

# Generated sources
message(STATUS "Using gRPC ${gRPC_VERSION}")

set(hw_proto_srcs "${CMAKE_CURRENT_SOURCE_DIR}/stub/basic.pb.cc")
set(hw_proto_hdrs "${CMAKE_CURRENT_SOURCE_DIR}/stub/basic.pb.h")
set(hw_grpc_srcs "${CMAKE_CURRENT_SOURCE_DIR}/stub/basic.grpc.pb.cc")
set(hw_grpc_hdrs "${CMAKE_CURRENT_SOURCE_DIR}/stub/basic.grpc.pb.h")

add_library( grpc_proto_wx
  ${hw_grpc_srcs}
  ${hw_grpc_hdrs}
  ${hw_proto_srcs}
  ${hw_proto_hdrs}
)
target_link_libraries( grpc_proto_wx
${_GRPC_GRPCPP}
)

add_executable (client "Client.cpp")
target_link_libraries(client grpc_proto_wx ${_GRPC_GRPCPP})

#-DCMAKE_TOOLCHAIN_FILE=C:/Users/subaru/Desktop/clone/vcpkg/scripts/buildsystems/vcpkg.cmake
