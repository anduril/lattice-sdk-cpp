# Anduril SDK C++

## Requirements

* gRPC 1.62.4. This can be installed with Homebrew on OSX `brew install grpc`

## Installation

### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.25.0)
project(anduril-sdk-example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download the SDK from github and add it as part of the project
include(FetchContent)
FetchContent_Declare(
  anduril-sdk-cpp
  GIT_REPOSITORY https://github.com/anduril/anduril-cpp.git
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(anduril-sdk-cpp)

# Build the text-only CLI and link against the Anduril SDK.
add_executable(cli_client main.cpp)
target_link_libraries(cli_client anduril-sdk-cpp)
```

### Usage
main.cpp 

```cpp
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <anduril/entitymanager/v1/entity_manager_api.pub.grpc.pb.h>

int main(int argc, char *argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    auto url = "desert-guardian.anduril.com:443";

    grpc::ClientContext ctx;
    // Setting custom metadata to be sent to the server
    ctx.AddMetadata("authorization", "Bearer <BEARER TOKEN>");

    auto creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
    std::shared_ptr<anduril::entitymanager::v1::EntityManagerAPI::Stub> mStub =
        anduril::entitymanager::v1::EntityManagerAPI::NewStub(grpc::CreateChannel(url, creds));

    anduril::entitymanager::v1::GetEntityRequest req;
    req.set_entity_id("<ENTITY ID>");

    anduril::entitymanager::v1::GetEntityResponse res;

    grpc::Status status = mStub->GetEntity(&ctx, req, &res);

    if(!status.ok()) {
        std::cerr << "Error code: " << status.error_code() << std::endl;
        std::cerr << "Error message: " << status.error_message() << std::endl;
    } else {
        std::cout << res.entity().DebugString() << std::endl;
    }

    return 0;
}
```

```
mkdir build
cd build
cmake ..
make
./cli_client
```
