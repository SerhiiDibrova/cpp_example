cmake_minimum_required(VERSION 3.10)

project(cpp_example)

set(CMAKE_CXX_STANDARD 17)

# Додаємо директорії для заголовочних файлів
include_directories(src)

# Додаємо всі необхідні файли
add_executable(cpp_example
    src/main.cpp
    src/WebServer.cpp
    src/HttpHandler.h
    src/GetHandler.h
    src/PostHandler.h
    src/WebServer.h
    src/TestHandler.cpp
)
