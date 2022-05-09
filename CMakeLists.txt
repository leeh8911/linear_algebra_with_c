cmake_minimum_required(VERSION 3.11.3)
project(LINEAR_ALGEBRA_WITH_CPP)

# Set the C++ standard we will use
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(src)

add_subdirectory(test)

add_dependencies(Test LINEAR_ALGEBRA_WITH_CPP)