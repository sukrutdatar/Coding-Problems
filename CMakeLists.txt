cmake_minimum_required (VERSION 2.6)

message(STATUS ${CMAKE_SOURCE_DIR})

set (CMAKE_CXX_STANDARD 14)
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


project(problem_04)
add_executable(problem_04 "${SRC}problem_04.cpp")
add_executable(problem_04_tests "${UTEST}problem_04_tests.cpp")

find_package(GTest REQUIRED)
target_include_directories(problem_04_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

target_link_libraries(problem_04_tests PUBLIC
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
  )

target_compile_options(problem_04_tests PUBLIC "-pthread")


project(problem_06)
add_executable(problem_06 "${SRC}problem_06.cpp")
add_executable(problem_06_tests "${UTEST}problem_06_tests.cpp")

find_package(GTest REQUIRED)
target_include_directories(problem_06_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

target_link_libraries(problem_06_tests PUBLIC
    ${GTEST_BOTH_LIBRARIES}
    ${CMAKE_THREAD_LIBS_INIT}
  )

target_compile_options(problem_06_tests PUBLIC "-pthread")


project(problem_420)
add_executable(problem_420 "${SRC}problem_420.cpp")
add_executable(problem_420_tests "${UTEST}problem_420_tests.cpp")
find_package(GTest REQUIRED)
target_include_directories(problem_420_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

  target_link_libraries(problem_420_tests PUBLIC
  ${GTEST_BOTH_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
)

target_compile_options(problem_420_tests PUBLIC "-pthread")

project(problem_159)
add_executable(problem_159 "${SRC}problem_159.cpp")
add_executable(problem_159_tests "${UTEST}problem_159_tests.cpp")
find_package(GTest REQUIRED)
target_include_directories(problem_159_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

  target_link_libraries(problem_159_tests PUBLIC
  ${GTEST_BOTH_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
)

target_compile_options(problem_159_tests PUBLIC "-pthread")

project(problem_368)
add_executable(problem_368 "${SRC}problem_368.cpp")
add_executable(problem_368_tests "${UTEST}problem_368_tests.cpp")
find_package(GTest REQUIRED)
target_include_directories(problem_368_tests PUBLIC
    ${GTEST_INCLUDE_DIRS} 
    ${SRC}
  )

target_link_libraries(problem_368_tests PUBLIC
  ${GTEST_BOTH_LIBRARIES}
  ${CMAKE_THREAD_LIBS_INIT}
)

target_compile_options(problem_368_tests PUBLIC "-pthread")

include(CPack)
