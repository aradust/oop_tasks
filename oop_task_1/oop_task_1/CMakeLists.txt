# CMakeList.txt: проект CMake для oop_task_1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (oop_task_1 "module_1.h" "module_1.cpp" "module_2.h" "module_2.cpp" "module_3.h" "module_3.cpp" "main.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET oop_task_1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
