cmake_minimum_required(VERSION 3.10)
project(Positive LANGUAGES C)

add_subdirectory(modules)

add_executable(${PROJECT_NAME} main.c)
target_link_libraries(${PROJECT_NAME} subtractor)