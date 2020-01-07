set(HEADER_LIST "${PROJECT_SOURCE_DIR}/include/minunit/minunit.h")

add_executable(loxtest testlib.c ${HEADER_LIST})

target_compile_features(loxtest PRIVATE c_std_99)

target_link_libraries(loxtest PRIVATE lox)

add_test(NAME tests COMMAND loxtest)
