# CSC131 - Computational Thinking
# Missouri State University, Spring 2018.
# Homework 5 - Working with functions in C++

cmake_minimum_required(VERSION 3.10)
project(hw05)

set(CMAKE_CXX_STANDARD 11)

add_executable(hw05 main.cpp functions.h)
add_executable(hw05Test functions_test.cpp functions.h)