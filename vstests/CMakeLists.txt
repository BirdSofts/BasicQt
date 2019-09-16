# *******************************************************************************************
#/ <summary>
#/ 
#/ </summary>
#/ <created>ʆϒʅ,15.09.2019</created>
#/ <changed>ʆϒʅ,17.09.2019</changed>
# *******************************************************************************************


cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME vstests)

set(PROJECT_NAME ${TARGET_NAME})

project(${PROJECT_NAME}
          VERSION 0.1.0.0
          DESCRIPTION "Visual Studio UnitTests for Qt notes and examples project."
          HOMEPAGE_URL "https://github.com/BirdSofts/LearningQt"
          LANGUAGES CXX
)

enable_testing()

set(UNITTEST_ROOT_DIR $ENV{VCInstallDir}/Auxiliary/VS/UnitTest)
set(INCLUDE_DIRECTORY ${UNITTEST_ROOT_DIR}/include)
set(LIBRARY_DIRECTORY ${UNITTEST_ROOT_DIR}/lib/x64/)

find_file(UNITTEST_LIBRARY Microsoft.VisualStudio.TestTools.CppUnitTestFramework HINTS ${LIBRARY_DIRECTORY} PATH_SUFFIXES lib)

include_directories(${INCLUDE_DIRECTORY})

list(APPEND HEADER_FILES
          utests.h
)

list(APPEND SOURCE_FILES
          utests.cpp
)

if(WIN32)
          list(APPEND SOURCE_FILES ${HEADER_FILES})
endif(WIN32)

add_library(${TARGET_NAME} STATIC ${SOURCE_FILES})

target_include_directories(${TARGET_NAME} BEFORE PUBLIC ${INCLUDE_DIRECTORY})

target_link_libraries(${TARGET_NAME}
          PUBLIC Qt5::Widgets
          PUBLIC ${UNITTEST_LIBRARY}
)

add_test(UnitTest ${TARGET_NAME})
