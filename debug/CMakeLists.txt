add_executable(learn-tree main.cpp)
target_include_directories(learn-tree PRIVATE ../include)
target_link_libraries(learn-tree PRIVATE binary-search-tree)