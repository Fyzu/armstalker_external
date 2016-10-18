cmake_minimum_required(VERSION 3.6)

project(armstalker_external VERSION 0.0.0.1)

add_definitions(-std=c++14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/target/${PROJECT_VERSION}/)

set(SOURCE_FILES
        # Base
        src/base/starter/main.cpp)

#add_executable(armstalker_external ${SOURCE_FILES})
add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

add_custom_command(TARGET ${PROJECT_NAME}
        POST_BUILD COMMAND ${CMAKE_COMMAND} -E rename
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}lib${PROJECT_NAME}.dll
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}extAS.dll)