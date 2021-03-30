add_test(test_parser test_parser)
add_executable(test_parser TestParser.cpp)
target_link_libraries(test_parser ${ANRLR4_RUNTIME} ANTLRv4Parser)

add_test(test_parse_rule test_parse_rule)
add_executable(test_parse_rule TestParseRule.cpp)
target_link_libraries(test_parse_rule ${ANRLR4_RUNTIME} ANTLRv4Parser ParseRule)

add_test(test_text_generator test_text_generator)
add_executable(test_text_generator TestGenerator.cpp)
target_link_libraries(test_text_generator ${ANRLR4_RUNTIME} ANTLRv4Parser ParseRule)

add_test(test_count_min_depth test_count_min_depth)
add_executable(test_count_min_depth TestCountMinDepth.cpp)
target_link_libraries(test_count_min_depth ${ANRLR4_RUNTIME} ANTLRv4Parser ParseRule)
