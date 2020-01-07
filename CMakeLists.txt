cmake_minimum_required(VERSION 3.11...3.16)

# Version ranges were added in CMake 3.12
if(${CMAKE_VERSION} VERSION_LESS 3.12)
  cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(Lox
  VERSION 1.0.0
  DESCRIPTION "Lox interpreter written in C, following Bob Nystrom's book Crafting Interpreters (https://craftinginterpreters.com/)."
  HOMEPAGE_URL "https://github.com/unindented/lox-c"
  LANGUAGES C
)

# Only do these if this is the main project, and not if it is included through
# `add_subdirectory`
if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
  # Set standard globally
  set(CMAKE_C_STANDARD 99)
  set(CMAKE_C_STANDARD_REQUIRED ON)
  # Ensure `-std=c99` instead of `-std=gnu99`
  set(CMAKE_C_EXTENSIONS OFF)
  # Support folders in IDEs
  set_property(GLOBAL PROPERTY USE_FOLDERS ON)
  # This needs to be done in the main `CMakeLists.txt` since it calls
  # `enable_testing`
  include(CTest)
endif()

add_subdirectory(src)

add_subdirectory(apps)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME AND BUILD_TESTING)
  add_subdirectory(tests)
endif()
