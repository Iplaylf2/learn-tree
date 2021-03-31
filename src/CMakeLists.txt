add_library(binary-search-tree STATIC binary-search-tree.cpp)
target_include_directories(binary-search-tree PUBLIC ../include PRIVATE ./binary-search-tree)
target_compile_features(binary-search-tree PRIVATE cxx_std_20)