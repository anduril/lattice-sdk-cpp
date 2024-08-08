cmake_minimum_required(VERSION 3.16)
project(
  anduril-sdk-cpp
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Download gRPC and protobuf
# The compiled gRPC versions and the runtime versions need to match, which is why we don't allow passing
# in a locally installed version.
include(FetchContent)

FetchContent_Declare(
    protobuf
    GIT_REPOSITORY https://github.com/protocolbuffers/protobuf
    GIT_TAG        v27.3
    OVERRIDE_FIND_PACKAGE
)
FetchContent_MakeAvailable(protobuf)

FetchContent_Declare(
  gRPC
  GIT_REPOSITORY https://github.com/grpc/grpc
  GIT_TAG        v1.65.4
  OVERRIDE_FIND_PACKAGE
)

# Disable building all but the c++ plugin to speed up the build time.
# We don't need to build plugins for all the other languages gRPC supports.
set(gRPC_BUILD_GRPC_CSHARP_PLUGIN OFF CACHE INTERNAL "")
set(gRPC_BUILD_CSHARP_EXT OFF CACHE INTERNAL "")
set(gRPC_BUILD_GRPC_NODE_PLUGIN OFF CACHE INTERNAL "")
set(gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN OFF CACHE INTERNAL "")
set(gRPC_BUILD_GRPC_PHP_PLUGIN OFF CACHE INTERNAL "")
set(gRPC_BUILD_GRPC_PYTHON_PLUGIN OFF CACHE INTERNAL "")
set(gRPC_BUILD_GRPC_RUBY_PLUGIN OFF CACHE INTERNAL "")
set(ABSL_ENABLE_INSTALL ON)
set(_PROTOBUF_LIBPROTOBUF protobuf::libprotobuf)
set(_REFLECTION grpc++_reflection)
set(_GRPC_GRPCPP grpc++)

FetchContent_MakeAvailable(gRPC)

## Get all the Proto generated files
file(GLOB_RECURSE anduril-sdk-sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(anduril-sdk-cpp STATIC ${anduril-sdk-sources})

target_include_directories(anduril-sdk-cpp PUBLIC src)
target_link_libraries(anduril-sdk-cpp PUBLIC grpc++ protobuf::libprotobuf)
