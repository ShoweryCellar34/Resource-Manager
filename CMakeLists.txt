set(CMAKE_CXX_STANDARD 20)
set(POSITION_INDEPENDENT_CODE true)

cmake_minimum_required(VERSION 3.20)
project(Resource-Manager DESCRIPTION "A Basic File Resource Manager" LANGUAGES CXX HOMEPAGE_URL "https://github.com/ShoweryCellar34/Resource-Manager")
file(GLOB source source/*.cpp)
add_library(Resource-Manager ${source})
target_include_directories(Resource-Manager PUBLIC headers)

if(MSVC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_CRT_SECURE_NO_WARNINGS /MP")
endif()
if(GCC)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Werror -Wall -Wextra -pedantic -fsanitize=address,undefined")
endif()
