cmake_minimum_required(VERSION 3.11.3)

# Set the C++ standard we will use
set(CMAKE_CXX_STANDARD 17)

# Add the path of the cmake files to the CMAKE_MODULE_PATH
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

project(LINEAR_ALGEBRA_WITH_CPP)

# Set library output path to /lib
set(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib")

# Add project executable
add_executable(LINEAR_ALGEBRA_WITH_CPP src/SampleMain.cpp)


# Set options for Linux or Microsoft Visual C++
# if( ${CMAKE_SYSTEM_NAME} MATCHES "Linux" )
#     target_link_libraries(LINEAR_ALGEBRA_WITH_CPP PUBLIC pthread)
# endif()

if(MSVC)
	target_compile_options(LINEAR_ALGEBRA_WITH_CPP PUBLIC /D_SILENCE_CXX17_ALLOCATOR_VOID_DEPRECATION_WARNING /wd4459)
endif()
