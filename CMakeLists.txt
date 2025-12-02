cmake_minimum_required(VERSION 4.0)
project(cpp101)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(cpp101
        include/Combinations.h
        include/Permutations.h
        include/Subset.h
        src/Combinations.cpp
        src/main.cpp
        src/Permutations.cpp
        src/Subset.cpp
        src/SumPath.cpp
        include/SumPath.h)
