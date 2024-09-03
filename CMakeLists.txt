cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -ggdb -g2")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -Wall -O3")

project(client)
project(server)

file(GLOB clientPath ${CMAKE_SOURCE_DIR}/client/* ${CMAKE_SOURCE_DIR}/utility/*)
file(GLOB serverPath ${CMAKE_SOURCE_DIR}/server/* ${CMAKE_SOURCE_DIR}/utility/*)

include_directories(AFTER ${CMAKE_SOURCE_DIR}/utility)

add_executable(client ${clientPath})
add_executable(server ${serverPath})