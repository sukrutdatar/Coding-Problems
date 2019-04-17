cmake_minimum_required (VERSION 2.6)

message(STATUS ${CMAKE_SOURCE_DIR})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR}/bin)


set(SRC "${CMAKE_SOURCE_DIR}/src/")
set(UTEST "${CMAKE_SOURCE_DIR}/tests/")

project(problem_01)
add_executable(problem_01 "${SRC}problem_01.cpp")
add_executable(problem_01_tests "${UTEST}problem_01_tests.cpp")

find_package(GTest REQUIRED)

target_include_directories(problem_01_tests PUBLIC
    ${GTEST_INCLUDE_DIRS}
    ${SRC}
  )

target_link_libraries(problem_01_tests PUBLIC
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
  )

target_compile_options(problem_01_tests PUBLIC "-pthread")
#target_compile_definitions(problem_01_tests PUBLIC UNIT_TEST)

project(problem_02)
add_executable(problem_02 "${SRC}problem_02.cpp")
add_executable(problem_02_tests "${UTEST}problem_02_tests.cpp")

find_package(GTest REQUIRED)
target_include_directories(problem_02_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

target_link_libraries(problem_02_tests PUBLIC
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
  )

target_compile_options(problem_02_tests PUBLIC "-pthread")
#target_compile_definitions(problem_02_tests PUBLIC UNIT_TEST)


include(CPack)
