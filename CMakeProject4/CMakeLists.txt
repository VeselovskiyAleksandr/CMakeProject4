# CMakeList.txt: проект CMake для CMakeProject4; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
#include (FetchContent)
#FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/whoshuu/cpr.git GIT_TAG c8d33915dbd88ad6c92b258869b03aba06587ff9)
#FetchContent_MakeAvailable(cpr) 
#set(BUILD_CPR_TESTS OFF)
#set(CMAKE_USE_OPENSSL OFF)

#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject4 "CMakeProject4.cpp" "CMakeProject4.h")
target_link_libraries(CMakeProject1 PRIVATE cpr::cpr) 
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
