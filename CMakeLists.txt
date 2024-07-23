cmake_minimum_required(VERSION 3.5.0)
project(EquationTest VERSION 0.1.0 LANGUAGES C CXX)

add_executable(EquationTest main.cpp)
target_sources(EquationTest PRIVATE main.cpp)
include(CTest)
enable_testing()
add_test(
    NAME EquationTest
    COMMAND EquationTest
)

