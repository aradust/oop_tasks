cmake_minimum_required(VERSION 3.12)
project(oop_lab0_b)

# Создание исполняемого файла
add_executable(oop_lab0_b "oop_lab0_b.cpp" "Writer.cpp" "Reader.cpp" "Capacity.cpp")

# Копирование текстового файла
# Укажите путь к VLD
set(VLD_DIR "C:/Program Files (x86)/Visual Leak Detector")

# Добавьте директорию с заголовочными файлами
include_directories(${VLD_DIR}/include)

# Линковка с библиотекой VLD
if(MSVC)
    target_link_libraries(oop_lab0_b "${VLD_DIR}/lib/Win64/vld.lib")
endif()

# Установка стандарта C++
set_property(TARGET oop_lab0_b PROPERTY CXX_STANDARD 20)
