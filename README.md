# anduril-cpp

### CMakeLists.txt

```cmake
cmake_minimum_required(VERSION 3.14.0)
project(anduril-sdk-example)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download the SDK from github and add it as part of the project
include(FetchContent)
set(ABSL_ENABLE_INSTALL ON)
FetchContent_Declare(
  anduril-sdk-cpp
  GIT_REPOSITORY https://github.com/anduril/anduril-cpp.git
)
set(FETCHCONTENT_QUIET OFF)
FetchContent_MakeAvailable(anduril-sdk-cpp)

# Build the text-only CLI and link against the Diatheke SDK.
add_executable(cli_client main.cpp)
target_link_libraries(cli_client PRIVATE anduril-sdk-cpp)
```

### Main.cpp
```cpp
#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <anduril/entitymanager/v1/entity_manager_api.pub.grpc.pb.h>

int main(int argc, char *argv[]) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    auto url = "desert-guardian.anduril.com";

    grpc::ClientContext ctx;
    // Setting custom metadata to be sent to the server
    ctx.AddMetadata("authorization", "Bearer ");

    auto creds = grpc::SslCredentials(grpc::SslCredentialsOptions());
    std::shared_ptr<anduril::entitymanager::v1::EntityManagerAPI::Stub> mStub = 
        anduril::entitymanager::v1::EntityManagerAPI::NewStub(grpc::CreateChannel(url, creds));

    anduril::entitymanager::v1::PutEntityRequest req;
    auto entity = new anduril::entitymanager::v1::Entity();
    entity->set_entity_id("abc");
    req.set_allocated_entity(entity);

    anduril::entitymanager::v1::PutEntityResponse res;

    grpc::Status status = mStub->PutEntity(&ctx, req, &res);
    std::cout << status.error_message();

    return 0;
}
```
