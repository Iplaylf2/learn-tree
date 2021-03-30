cmake_minimum_required(VERSION 3.0.0)
project(learn-tree VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(binary-search-tree STATIC include/binary-search-tree.hpp src/binary-search-tree.cpp)
target_include_directories(binary-search-tree PUBLIC include PRIVATE src)
target_compile_features(binary-search-tree PRIVATE cxx_std_20)

add_executable(learn-tree src/main.cpp)
target_include_directories(learn-tree PRIVATE include src)
target_link_libraries(learn-tree PRIVATE binary-search-tree)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
