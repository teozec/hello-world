cmake_minimum_required(VERSION 3.12)

# Define a "project", providing a description and a programming language
project(hello-world
    VERSION 1.0
    DESCRIPTION "Hello world in C++"
    LANGUAGES CXX
)

configure_file(src/hello-world-conf.h.in hello-world-conf.h)

# Our "project" will be able to build an executable out of a C++ source file
add_executable(hello-world
    src/main.cpp
)

target_include_directories(hello-world PUBLIC "${PROJECT_BINARY_DIR}")

# Force the compiler to use the C++17 standard
target_compile_features(hello-world PUBLIC cxx_std_17)

