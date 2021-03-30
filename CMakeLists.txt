
cmake_minimum_required(VERSION 3.0.0)
project(antlr4-grammar-parser VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 17)

include(CTest)
enable_testing()

find_library(ANRLR4_RUNTIME antlr4-runtime)
find_package(Boost 1.75 COMPONENTS headers)
include_directories(${Boost_INCLUDE_DIRS})
include_directories(include)
include_directories(ANTLRv4Parser /usr/local/include/antlr4-runtime)

add_subdirectory(ANTLRv4Parser)
add_subdirectory(tests)
add_subdirectory(src)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
