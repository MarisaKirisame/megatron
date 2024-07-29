project(megatron)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-mtune=native -march=native -O3")

add_subdirectory(third_party/memory)
link_libraries(foonathan_memory)

add_executable(LayoutFS_D LayoutFS_D.cpp)
add_executable(LayoutDB_D LayoutDB_D.cpp)
add_executable(LayoutPQ_D LayoutPQ_D.cpp)
add_executable(test test.cpp)