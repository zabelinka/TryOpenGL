cmake_minimum_required(VERSION 3.13)
project(OpenGLParticles)

set(CMAKE_CXX_STANDARD 11)

add_executable(OpenGLParticles main.cpp Shader.cpp Shader.h)
target_link_libraries(OpenGLParticles -lglut -lGLU -lGL -lGLEW -lglfw)