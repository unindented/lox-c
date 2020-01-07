add_executable(loxapp app.c)

target_compile_features(loxapp PRIVATE c_std_99)

target_link_libraries(loxapp PRIVATE lox)
