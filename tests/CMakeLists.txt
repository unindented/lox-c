FetchContent_Declare(
  check
  GIT_REPOSITORY https://github.com/libcheck/check.git
  GIT_TAG        d66c604
)

FetchContent_MakeAvailable(check)

add_executable(loxtest testlib.c ${HEADER_LIST})

target_compile_features(loxtest PRIVATE c_std_99)

target_link_libraries(loxtest PRIVATE lox Check::check)

add_test(NAME tests COMMAND loxtest)
