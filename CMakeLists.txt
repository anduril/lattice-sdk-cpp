cmake_minimum_required(VERSION 3.16)
project(
  anduril-sdk-cpp
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Specify the dependencies
find_package(gRPC CONFIG REQUIRED)

add_library(grpc ALIAS gRPC::grpc)
add_library(grpc++ ALIAS gRPC::grpc++)

## Get all the Proto generated files
file(GLOB_RECURSE anduril-sdk-sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(anduril-sdk-cpp STATIC ${anduril-sdk-sources})

target_include_directories(anduril-sdk-cpp PUBLIC src)
target_link_libraries(anduril-sdk-cpp PRIVATE grpc++ protobuf::libprotobuf)
