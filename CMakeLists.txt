cmake_minimum_required(VERSION 3.16)
project(
  lattice-sdk-cpp
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Specify the dependencies
find_package(protobuf 28.3.0 CONFIG REQUIRED)
find_package(gRPC 1.67.1 CONFIG REQUIRED)

add_library(grpc ALIAS gRPC::grpc)
add_library(grpc++ ALIAS gRPC::grpc++)

## Get all the Proto generated files
file(GLOB_RECURSE lattice-sdk-sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(lattice-sdk-cpp STATIC ${lattice-sdk-sources})

target_include_directories(lattice-sdk-cpp PUBLIC src)
target_link_libraries(lattice-sdk-cpp PUBLIC grpc++ protobuf::libprotobuf)
