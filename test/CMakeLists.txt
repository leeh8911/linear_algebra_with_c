set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_executable(
  Test
  test/matrix/TestMatrix.cpp
)
target_link_libraries(
  Test PUBLIC
  LINEAR_ALGEBRA_WITH_CPP
  gtest_main
)

target_include_directories(Test PUBLIC
"${PROJECT_BINARY_DIR}"
"${PROHECT_SOURCE_DIR}/src")

include(GoogleTest)
gtest_discover_tests(Test)