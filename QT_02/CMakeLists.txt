cmake_minimum_required(VERSION 3.14)

project(QT_02 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Sql REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Network REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_executable(QT_02
  main.cpp
)
target_link_libraries(QT_02 Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(QT_02 Qt${QT_VERSION_MAJOR}::Sql)
target_link_libraries(QT_02 Qt${QT_VERSION_MAJOR}::Network)
target_link_libraries(QT_02 Qt${QT_VERSION_MAJOR}::Widgets)
