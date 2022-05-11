# *******************************************************************************************
#/ <summary>
#/
#/ </summary>
#/ <created>ʆϒʅ,15.09.2019</created>
#/ <changed>ʆϒʅ,14.10.2019</changed>
# *******************************************************************************************

cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME gtests)

set(PROJECT_NAME ${TARGET_NAME})

project(${PROJECT_NAME}
  VERSION 0.1.0.0
  DESCRIPTION "Google Tests for Qt notes and examples project."
  HOMEPAGE_URL "https://github.com/s-mehrdad/LearningQt"
  LANGUAGES CXX
  )

find_package(GTest CONFIG REQUIRED)

list(APPEND HEADER_FILES
  gtests.h
  )

list(APPEND SOURCE_FILES
  gtests.cpp
  )

if(WIN32)
  list(APPEND SOURCE_FILES ${HEADER_FILES})
endif(WIN32)

add_executable(${TARGET_NAME} ${SOURCE_FILES})

target_link_libraries(${TARGET_NAME}
  PUBLIC GTest::gtest GTest::gtest_main
  )

add_test(AllTestsIn${TARGET_NAME}1 ${TARGET_NAME})

add_test(AllTestsIn${TARGET_NAME}2 ${TARGET_NAME})
