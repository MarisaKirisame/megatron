cmake_minimum_required(VERSION 3.9)

project(megatron)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-mtune=native -march=native -O3")
set(CMAKE_CXX_FLAGS_PROFILE "-pg")

add_subdirectory(third_party/memory)
link_libraries(foonathan_memory)

add_executable(LayoutFS_D LayoutFS_D.cpp)
add_executable(LayoutDB_D LayoutDB_D.cpp)
add_executable(LayoutPQ_D LayoutPQ_D.cpp)
add_executable(test test.cpp)

include(CheckIPOSupported)
check_ipo_supported(RESULT ipo_supported OUTPUT ipo_output)
if (ipo_supported)
    set_property(TARGET LayoutFS_D PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
    set_property(TARGET LayoutDB_D PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
    set_property(TARGET LayoutPQ_D PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
else()
    message(WARNING "IPO is not supported: ${ipo_output}")
endif()
