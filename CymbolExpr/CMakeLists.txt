include_directories(${PROJECT_SOURCE_DIR}/include)
add_library(CymbolExpr CymbolExpr.cpp Nodes.cpp)
target_link_libraries(ParseRule)