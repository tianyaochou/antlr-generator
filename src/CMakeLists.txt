add_subdirectory(Rules)

add_executable(antlr4-grammar-parser main.cpp)
target_link_libraries(antlr4-grammar-parser ${ANRLR4_RUNTIME} ANTLRv4Parser)