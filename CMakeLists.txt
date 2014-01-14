cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(FRC-14)

if(NOT CMAKE_BUILD_TYPE)
	message(FATAL_ERROR "No build type specified, call with -DCMAKE_BUILD_TYPE=Debug or -DCMAKE_BUILD_TYPE=Release")
endif()


if(CMAKE_BUILD_TYPE MATCHES Debug)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/debug)
elseif(CMAKE_BUILD_TYPE MATCHES Release)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/release)
else()
	message(FATAL_ERROR "Unknown build type \"${CMAKE_BUILD_TYPE}\"")
endif()

find_package(WPILib)
include_directories(SYSTEM ${WPILib_INCLUDE_DIRS})

file(GLOB_RECURSE SOURCE_CODE /src/robot *.cpp)

add_executable(frc-14.out ${SOURCE_CODE})
target_link_libraries(frc-14.out ${WPILib_LIBRARY})

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -pedantic -Wextra -O0 -DDEBUG" )
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -Wall -pedantic -Wextra -Werror -O3" )

get_property(EXECUTABLE_LOCATION TARGET frc-14.out PROPERTY LOCATION)
add_make_deploy(${EXECUTABLE_LOCATION} 10.4.22.2)
