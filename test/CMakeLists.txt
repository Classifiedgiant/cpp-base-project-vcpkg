project(test_target)

find_package(doctest CONFIG REQUIRED)

add_executable(test_target dummy.test.cpp)

target_include_directories(test_target PRIVATE ../src)

target_link_libraries(test_target PRIVATE doctest::doctest)

include(CTest)
include(doctest)
doctest_discover_tests(test_target)

add_custom_command(TARGET test_target
                   POST_BUILD
                   COMMAND ctest -C $<CONFIGURATION> --output-on-failure)