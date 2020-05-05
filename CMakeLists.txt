cmake_minimum_required(VERSION 3.15)

set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME Arraystuff)
project(${PROJECT_NAME})


file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.hpp") #glob all the source files intp one place

add_executable(${PROJECT_NAME} ${SOURCES})

