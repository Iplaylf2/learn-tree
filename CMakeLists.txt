cmake_minimum_required(VERSION 3.0.0)
project(learn-tree VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(CTest)
enable_testing()

add_executable(learn-tree src/main.cpp)
add_library(binary-search-tree src/binary-search-tree.cpp)

target_include_directories(binary-search-tree PUBLIC include PRIVATE src)
target_include_directories(learn-tree PUBLIC include PRIVATE src)
target_link_libraries(learn-tree PUBLIC binary-search-tree)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
