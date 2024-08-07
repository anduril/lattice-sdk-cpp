cmake_minimum_required(VERSION 3.16)
project(
  anduril-sdk-cpp
  VERSION 1.0
  LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_POSITION_INDEPENDENT_CODE True)

# Find system-installed gRPC
option(USE_SYSTEM_GRPC "Use system installed gRPC" OFF)
if(USE_SYSTEM_GRPC)
    find_package(gRPC CONFIG REQUIRED)
else()
    # Download gRPC from github and add it as part of the project
    include(FetchContent)
    FetchContent_Declare(
        gRPC
        GIT_REPOSITORY https://github.com/grpc/grpc
        GIT_TAG        v1.65.4
    )
    set(FETCHCONTENT_QUIET OFF)

    # Disable building all but the c++ plugin to speed up the build time.
    # We don't need to build plugins for all the other languages gRPC supports.
    set(gRPC_BUILD_GRPC_CSHARP_PLUGIN OFF CACHE INTERNAL "")
    set(gRPC_BUILD_CSHARP_EXT OFF CACHE INTERNAL "")
    set(gRPC_BUILD_GRPC_NODE_PLUGIN OFF CACHE INTERNAL "")
    set(gRPC_BUILD_GRPC_OBJECTIVE_C_PLUGIN OFF CACHE INTERNAL "")
    set(gRPC_BUILD_GRPC_PHP_PLUGIN OFF CACHE INTERNAL "")
    set(gRPC_BUILD_GRPC_PYTHON_PLUGIN OFF CACHE INTERNAL "")
    set(gRPC_BUILD_GRPC_RUBY_PLUGIN OFF CACHE INTERNAL "")

    # Add gRPC to the project
    FetchContent_MakeAvailable(gRPC)
endif()

message(STATUS "Using gRPC ${gRPC_VERSION}")

## Get all the Proto generated files
file(GLOB_RECURSE anduril-sdk-sources ${PROJECT_SOURCE_DIR}/*.cc)
add_library(anduril-sdk-cpp ${anduril-sdk-sources})

# Add Protobuf
find_package(Protobuf REQUIRED)

target_include_directories(anduril-sdk-cpp PUBLIC src ${Protobuf_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(anduril-sdk-cpp PUBLIC gRPC::grpc++ gRPC::grpc++_reflection ${Protobuf_LIBRARIES})

