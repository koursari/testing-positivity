cmake_minimum_required(VERSION 3.10)
project(Positive LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

enable_testing()
find_package(GTest REQUIRED)
message(STATUS "GTest included at ${GTEST_INCLUDE_DIRS}")

add_subdirectory(modules)
add_subdirectory(tests)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} subtractor)