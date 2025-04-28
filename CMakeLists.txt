cmake_minimum_required(VERSION 3.10)

project(ProjectClock)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

qt5_add_resources(RESOURCES resources.qrc)

add_executable(clock src/ClockMain.cpp src/ClockWidget.cpp ${RESOURCES})
include_directories(header)
target_link_libraries(clock Qt5::Widgets)