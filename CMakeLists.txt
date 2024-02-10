cmake_minimum_required(VERSION 3.12)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall)

project(cs1200-hw-template CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v2.13.8
)
FetchContent_MakeAvailable(Catch2)

add_executable(test test.cpp)

target_link_libraries(test PRIVATE Catch2::Catch2)
