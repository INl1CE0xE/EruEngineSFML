cmake_minimum_required(VERSION 3.4...3.28 FATAL_ERROR)

set(PROJECT_NAME EruEngineSFML)

project(${PROJECT_NAME})

# Укажите директорию с исходными файлами
set(SOURCE_DIR "src")

# Соберите все .cpp файлы из директории
file(GLOB SOURCES "${SOURCE_DIR}/*.h" , "${SOURCE_DIR}/*.cpp")

include_directories(external/SFML/include)
link_directories(external/SFML/lib)

set(CMAKE_CURRENT_BINARY_DIR ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} 
src/main.cpp
${SOURCES}
)
