include(CMakePackageConfigHelpers)

cmake_minimum_required(VERSION 3.16)
project(lattice-sdk-cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED on)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(ABSL_PROPAGATE_CXX_STD ON)
set(ABSL_ENABLE_INSTALL ON)

## Get all the Proto generated files
file(GLOB_RECURSE lattice-sdk_SOURCES src/*.cc)
set(SOURCES ${lattice-sdk_SOURCES})

file(GLOB_RECURSE lattice-sdk_HEADERS src/*.h)
set(HEADERS ${lattice-sdk_HEADERS})

add_library(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME}
	PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
	$<INSTALL_INTERFACE:include>
)

# Find system-installed gRPC and Protobuf libraries
find_package(gRPC 1.68.0 CONFIG REQUIRED)
find_package(protobuf 29.0.0 CONFIG REQUIRED)

target_link_libraries(${PROJECT_NAME} PUBLIC gRPC::grpc++ protobuf::libprotobuf)
