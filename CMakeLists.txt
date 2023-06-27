
# ============================================================================
#/ <summary>
#/ CMakeLists.txt
#/ QtIntroduction
#/ created by Mehrdad Soleimanimajd on 10.09.2019
#/ </summary>
#/ <created>ʆϒʅ, 10.09.2019</created>
#/ <changed>ʆϒʅ, 27.06.2023</changed>
# ============================================================================


cmake_minimum_required(VERSION 3.5)

set(TARGET_NAME QtIntroduction)

set(RELEASE_FLAG OFF)

set(PROJECT_NAME ${TARGET_NAME})

project(${PROJECT_NAME}
    VERSION 0.1.0.0
    DESCRIPTION "Qt notes and examples"
    HOMEPAGE_URL "https://github.com/s-mehrdad/QtIntroduction"
    LANGUAGES CXX
    )

set(CMAKE_INCLUDE_CURRENT_DIR ON)

include(CTest)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

#include_directories(CMAKE_CURRENT_SOURCE_DIR)

if(MSVC)
    #  add_subdirectory(vstests)
    add_subdirectory(gtests)
endif(MSVC)

if(MSVC)
    list(APPEND RESOURCES
        ${TARGET_NAME}.rc
        resource.h
        )
endif(MSVC)

list(APPEND HEADER_FILES
    mainwindow.h
    screenshot.h
    style.h
    )

list(APPEND SOURCE_FILES
    main.cpp
    mainwindow.cpp
    screenshot.cpp
    style.cpp
    )

list(APPEND UI_FILES
    mainwindow.ui
    theme.css
    )

if(WIN32)
    list(APPEND SOURCE_FILES ${HEADER_FILES})
    #          list(APPEND SOURCE_FILES ${UI_FILES})
endif(WIN32)

if(WIN32)
    add_executable(${TARGET_NAME} WIN32
        ${SOURCE_FILES}
        ${HEADER_FILES}
        ${UI_FILES}
        ${RESOURCES}
        )

else(WIN32)
    add_executable(${TARGET_NAME}
        ${SOURCE_FILES}
        ${HEADER_FILES}
        ${UI_FILES}
        ${RESOURCES}
        )
endif(WIN32)

target_link_libraries(${TARGET_NAME}
    PUBLIC Qt6::Widgets
    )

add_custom_command(TARGET ${TARGET_NAME} PRE_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    ${CMAKE_CURRENT_SOURCE_DIR}/theme.css
    $<TARGET_FILE_DIR:${TARGET_NAME}>
    VERBATIM)

#install (FILES theme.css
#  DESTINATION $<TARGET_FILE_DIR:${TARGET_NAME}>)

#install (TARGETS ${TARGET_NAME}
#  DESTINATION CMAKE_BINARY_DIR
#  )
install (FILES theme.css
    #    FILES ${CMAKE_CURRENT_SOURCE_DIR}/theme.css
    DESTINATION ${CMAKE_CURRENT_BINARY_DIR}
    PERMISSIONS OWNER_READ
    )

# releasing Qt dlls (Qt licenses must be followed)
if(RELEASE_FLAG)
    if(GNUCXX)
        add_custom_command(TARGET ${TARGET_NAME} PRE_BUILD
            COMMAND cmake -E copy_if_different
            ${QT_BINARIES}/libgcc_s_seh-1.dll
            ${QT_BINARIES}/libstdc++-6.dll
            ${QT_BINARIES}/libwinpthread-1.dll
            ${QT_BINARIES}/Qt5Core.dll
            ${QT_BINARIES}/Qt5Cored.dll
            ${QT_BINARIES}/Qt5Guid.dll
            ${QT_BINARIES}/Qt5Widgets.dll
            ${QT_BINARIES}/Qt5Widgetsd.dll
            $<TARGET_FILE_DIR:${TARGET_NAME}>
            )
    endif(GNUCXX)
endif(RELEASE_FLAG)
