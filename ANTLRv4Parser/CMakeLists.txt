file(GLOB ANTLRv4Parser_SOURCES ANTLRv4*.cpp)

add_library(ANTLRv4Parser
    LexerAdaptor.cpp
    ${ANTLRv4Parser_SOURCES}
    )