cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(FRC-14)
find_package(WPILib)
include_directories(SYSTEM ${WPILib_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_CODE /src/main/*.cpp)

add_executable(frc-14 ${SOURCE_CODE})
target_link_libraries(frc-14 ${WPILib_LIBRARY})

add_make_deploy(frc-14 10.4.22.2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -DUSE_CPP_11")
