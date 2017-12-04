cmake_minimum_required(VERSION 3.6.0)
project(snake-prj)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory("${PROJECT_SOURCE_DIR}/external/googletest")

set(EXECUTABLE_NAME "snake")
add_executable(${EXECUTABLE_NAME}
	src/main.cpp
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${EXECUTABLE_NAME})

target_link_libraries(${EXECUTABLE_NAME} gtest)

target_include_directories(${EXECUTABLE_NAME} PRIVATE
	"${PROJECT_SOURCE_DIR}/external/googletest"
	"${PROJECT_SOURCE_DIR}/include"
)
