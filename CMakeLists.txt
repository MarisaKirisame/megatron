cmake_minimum_required(VERSION 3.9)

project(megatron)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS "-mtune=native -march=native -O3")
set(CMAKE_CXX_FLAGS_PROFILE "-pg")

if(UNIX AND NOT APPLE)
    link_libraries(papi)
    link_libraries(pfm)
endif()

set(FOONATHAN_MEMORY_BUILD_EXAMPLES OFF)
set(FOONATHAN_MEMORY_BUILD_TESTS OFF)
set(FOONATHAN_MEMORY_BUILD_TOOLS OFF)
add_subdirectory(third_party/memory)
link_libraries(foonathan_memory)

add_subdirectory(third_party/json)
link_libraries(nlohmann_json)

add_subdirectory(third_party/predef)
link_libraries(boost_predef)

add_library(megatron_runtime INTERFACE)
target_include_directories(megatron_runtime INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
link_libraries(megatron_runtime)

add_compile_options(-Wno-return-type)
set(CMAKE_CXX_FLAGS "-g")
set(CMAKE_C_FLAGS "-g")


include(CheckIPOSupported)
check_ipo_supported(RESULT ipo_supported OUTPUT ipo_output)

function(megatron_new_layout layout_name)
    if (EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${layout_name}.cpp")
        add_executable("${layout_name}" "${layout_name}.cpp")
        if (ipo_supported)
            set_property(TARGET "${layout_name}" PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)
        else()
            message(WARNING "IPO is not supported: ${ipo_output}")
        endif()
        # target_link_options("${layout_name}" PUBLIC -fsanitize=undefined PUBLIC -fsanitize=address)
    endif()
endfunction()

megatron_new_layout(LayoutFS_D)
megatron_new_layout(LayoutNE_D)
megatron_new_layout(LayoutDB_D)
megatron_new_layout(LayoutPQ_D)