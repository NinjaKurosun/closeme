cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(closeme LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt6 REQUIRED Widgets Core)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable(main main.cpp)

target_link_libraries(main PRIVATE Qt6::Widgets Qt6::Core)
