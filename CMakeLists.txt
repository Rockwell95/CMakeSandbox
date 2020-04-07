cmake_minimum_required(VERSION 3.15)
project(TestProj VERSION 1.0)
configure_file(Version.h.in Version.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_subdirectory(TestLibrary)
add_subdirectory(Impl)