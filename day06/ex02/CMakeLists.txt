cmake_minimum_required(VERSION 3.17)

project(identify)

set(PATH ./)

include_directories(./includes/)


AUX_SOURCE_DIRECTORY (${PATH} MY_SRCS)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES ${MY_SRCS} Base.cpp Base.hpp)

LINK_DIRECTORIES(./)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(identify ${SOURCE_FILES})