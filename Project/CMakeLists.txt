cmake_minimum_required(VERSION 3.22.0)	

project(Project)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(VenchilLib SHARED Venchil.h Venchil.cpp)
add_library(AirTLib SHARED AirT.h AirT.cpp)
add_library(GroundLib SHARED GroundT.h GroundT.cpp)
add_library(KamelLib SHARED Kamel.h Kamel.cpp)
add_library(fKamelLib SHARED fKamel.h fKamel.cpp)
add_library(EagleLib SHARED Eagle.h Eagle.cpp)
add_library(BootsLib SHARED Boots.h Boots.cpp)
add_library(CarpetLib SHARED Carpet.h Carpet.cpp)
add_library(CentaurLib SHARED Centaur.h Centaur.cpp)
add_library(BroomLib SHARED Broom.h Broom.cpp)
add_executable(Project main.cpp)
target_link_libraries(Project VenchilLib AirTLib GroundLib KamelLib fKamelLib EagleLib BootsLib BroomLib CarpetLib CentaurLib)