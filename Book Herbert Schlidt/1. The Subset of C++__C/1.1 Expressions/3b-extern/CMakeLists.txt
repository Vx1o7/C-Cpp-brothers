cmake_minimum_required(VERSION 3.0.0)
project(3b-extern VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(3b-extern 3b-2.c)
add_executable(3b-extern 3b-1.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
