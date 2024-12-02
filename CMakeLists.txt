cmake_minimum_required(VERSION 3.16)
project(lattice-sdk-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Specify the dependencies
option(USE_SYSTEM_GRPC_PROTOBUF "Use system installed gRPC" OFF)
if(USE_SYSTEM_GRPC_PROTOBUF)
  # Find system-installed gRPC and Protobuf libraries
  find_package(gRPC 1.68.0 CONFIG REQUIRED)
  find_package(protobuf 29.0.0 CONFIG REQUIRED)
else()
  include(FetchContent)
  set(FETCHCONTENT_QUIET OFF)
  set(ABSL_PROPAGATE_CXX_STD ON)
  set(ABSL_ENABLE_INSTALL ON)
  find_package(ZLIB REQUIRED)
  
  # Build gRPC and Protobuf using FetchContent
  FetchContent_Declare(
      protobuf
      GIT_REPOSITORY https://github.com/google/protobuf
      GIT_TAG        v29.0
      GIT_PROGRESS   TRUE
      GIT_SHALLOW    TRUE
      USES_TERMINAL_DOWNLOAD TRUE
      GIT_SUBMODULES_RECURSE FALSE
      GIT_SUBMODULES ""
  )
  set(protobuf_BUILD_TESTS OFF)
  set(protobuf_BUILD_CONFORMANCE OFF)
  set(protobuf_BUILD_EXAMPLES OFF)
  set(protobuf_BUILD_PROTOC_BINARIES ON)
  set(protobuf_DISABLE_RTTI ON)
  set(protobuf_MSVC_STATIC_RUNTIME ON)
  set(protobuf_WITH_ZLIB ON CACHE BOOL "" FORCE)

  FetchContent_MakeAvailable(protobuf)
   # Build gRPC and Protobuf using FetchContent
  FetchContent_Declare(
    gRPC
    GIT_REPOSITORY https://github.com/grpc/grpc
    GIT_TAG        v1.68.0       
    GIT_PROGRESS   TRUE
    GIT_SHALLOW    TRUE
    USES_TERMINAL_DOWNLOAD TRUE
    GIT_SUBMODULES_RECURSE FALSE
    GIT_SUBMODULES
      "third_party/cares"
      "third_party/boringssl-with-bazel"
      "third_party/re2"
      "third_party/abseil-cpp"  
  )
  FetchContent_MakeAvailable(gRPC)
  
  set(gRPC_BUILD_TESTS OFF)
  set(gRPC_BUILD_CODEGEN ON) # for grpc_cpp_plugin
  set(gRPC_BUILD_GRPC_CPP_PLUGIN ON) # we want to use only C++ plugin
  set(gRPC_BUILD_CSHARP_EXT OFF)
  set(gRPC_BUILD_GRPC_CSHARP_PLUGIN OFF)
  set(gRPC_BUILD_GRPC_NODE_PLUGIN OFF)
  set(gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN OFF)
  set(gRPC_BUILD_GRPC_PHP_PLUGIN OFF)
  set(gRPC_BUILD_GRPC_PYTHON_PLUGIN OFF)
  set(gRPC_BUILD_GRPC_RUBY_PLUGIN OFF)

  set(gRPC_BENCHMARK_PROVIDER "none" CACHE STRING "" FORCE)
  set(gRPC_PROTOBUF_PROVIDER "module" CACHE STRING "" FORCE)
  set(gRPC_ZLIB_PROVIDER "package" CACHE STRING "" FORCE)

  # use lite protobuf version, unless we start using features
  # that require full protobuf
  set(gRPC_USE_PROTO_LITE ON CACHE BOOL "" FORCE)
endif()

## Get all the Proto generated files
file(GLOB_RECURSE lattice-sdk-sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(lattice-sdk-cpp STATIC ${lattice-sdk-sources})

target_include_directories(lattice-sdk-cpp PUBLIC src)
target_link_libraries(lattice-sdk-cpp PUBLIC gRPC::grpc++ protobuf::libprotobuf)
