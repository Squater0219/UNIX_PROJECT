cmake_minimum_required(VERSION 3.10)
project(MusicPlayer)

set(CMAKE_C_STANDARD 99)

include_directories(include)

add_library(linkedlist libs/linkedlist.c)
add_library(textfilewriter libs/textfilewriter.c)

add_executable(Player src/Player.c)
target_link_libraries(Player linkedlist textfilewriter)

# GoogleTest 설정
enable_testing()

# GoogleTest를 하위 디렉토리로 추가
add_subdirectory(googletest)
include_directories(googletest/googletest/include)

# PlayerTest 빌드 설정
add_executable(PlayerTest tst/PlayerTest.cc)
target_link_libraries(PlayerTest gtest gtest_main pthread linkedlist textfilewriter)
add_test(NAME PlayerTest COMMAND PlayerTest)
