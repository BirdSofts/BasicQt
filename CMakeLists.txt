# *******************************************************************************************
#/ <summary>
#/ 
#/ </summary>
#/ <created>ʆϒʅ,10.09.2019</created>
#/ <changed>ʆϒʅ,11.09.2019</changed>
# *******************************************************************************************


cmake_minimum_required(VERSION 3.5)

project(LearningQt LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(LearningQt
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(LearningQt PRIVATE Qt5::Widgets)

#add_custom_command(TARGET ${TARGET_NAME} PRE_BUILD
#          COMMAND cmake -E copy_if_different
#          $ENV{UserProfile}.../Library.dll
#          $<TARGET_FILE_DIR:${TARGET_NAME}>
#)
