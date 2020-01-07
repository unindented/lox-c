# Note that headers are optional, and do not affect `add_library`, but they
# will not show up in IDEs unless they are listed in `add_library`.

set(HEADER_LIST "${PROJECT_SOURCE_DIR}/include/lox/lib.h")

add_library(lox lib.c ${HEADER_LIST})

target_include_directories(lox PUBLIC ../include)

target_compile_features(lox PUBLIC c_std_99)

# IDEs should put headers in a nice place
source_group(TREE "${PROJECT_SOURCE_DIR}/include" PREFIX "Header Files" FILES ${HEADER_LIST})
