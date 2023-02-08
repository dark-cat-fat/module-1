cmake_minimum_required(VERSION 3.22.0)	

project(CMake_DLL_3)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(STRING_RETURN SHARED Leaver.h Leaver.cpp)