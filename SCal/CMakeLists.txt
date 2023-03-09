cmake_minimum_required(VERSION 3.24)
project(SCal)

set(CMAKE_CXX_STANDARD 17)

add_executable(SCal typeact.cpp typeact.h Simpleclc.cpp Simpleclc.h main.cpp)
