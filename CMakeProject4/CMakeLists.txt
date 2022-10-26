# CMakeList.txt: проект CMake для CMakeProject4; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
project ("CMakeProject4")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject4 "CMakeProject4.cpp" "CMakeProject4.h")
#target_link_libraries(CMakeProject4 PRIVATE cpr::cpr) 
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
