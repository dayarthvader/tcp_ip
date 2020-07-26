add_library(graph STATIC graph.cpp node.cpp link.cpp interface.cpp)
target_compile_options(graph PRIVATE -Werror -Wall -Wextra)
