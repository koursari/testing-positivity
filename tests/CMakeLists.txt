cmake_minimum_required(VERSION 3.10)

set(This Tester)

add_executable(${This} test_subtractor.cpp)
target_link_libraries(${This} GTest::gtest_main subtractor)

add_test(
    NAME ${This}
    COMMAND ${This}
)