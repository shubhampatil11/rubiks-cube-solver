cmake_minimum_required(VERSION 3.20)
project(rubiks_cube_solver)

set(CMAKE_CXX_STANDARD 14)

include_directories(Model)

add_executable(rubiks_cube_solver
        Model/RubiksCube.cpp
        Model/RubiksCube.h
        main.cpp Model/RubiksCube3dArray.cpp Model/RubiksCube1dArray.cpp Model/RubiksCubeBitboard.cpp Solver/DFSSolver.h Solver/BFSSolver.h)
