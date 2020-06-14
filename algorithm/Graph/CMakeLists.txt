cmake_minimum_required(VERSION 3.12)
project(GraphTheory)

set(CMAKE_CXX_STANDARD 14)

add_executable(GraphTheory main.cpp cmake-build-debug/DenseGraph.h cmake-build-debug/CMakeFiles/SparseGraph.h ReadGraph.h Componet.h Path.h ShortestPath.h)