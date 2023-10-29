cmake_minimum_required(VERSION 3.22)
project(tema1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

add_subdirectory(Watch)

add_executable(tema1 main.cpp)

target_link_libraries(tema1 PUBLIC Watch)

target_include_directories(tema1 PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/Watch")