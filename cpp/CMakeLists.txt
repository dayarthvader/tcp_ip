cmake_minimum_required(VERSION 3.14)

project(message_processor)

set (CMAKE_CXX_STANDARD 14)

add_subdirectory(external/spdlog)
find_package(spdlog)

add_subdirectory(external/googletest)
find_package(gtest)
include_directories("${PROJECT_SOURCE_DIR}/include/")
include_directories("${PROJECT_SOURCE_DIR}/src/")
include_directories("${PROJECT_SOURCE_DIR}/external/spdlog/include/")

#add_executable(main src/server/main.cpp)
