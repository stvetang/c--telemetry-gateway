cmake_minimum_required(VERSION 3.14)
project(telemetry_gateway LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_library(gateway_core src/version.cpp)
target_include_directories(gateway_core PUBLIC include)
target_compile_options(gateway_core PRIVATE -Wall -Wextra -Wpedantic)

add_executable(gateway src/main.cpp)
target_link_libraries(gateway PRIVATE gateway_core)

include(FetchContent)
FetchContent_Declare(googletest
	URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_subdirectory(tests)
