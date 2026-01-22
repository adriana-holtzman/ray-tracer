cmake_minimum_required(VERSION 3.12)
project(raytracer LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(raytracer
    src/main.cpp
    src/vec3.cpp
    src/image.cpp
    src/camera.cpp
    src/ray.cpp
    src/sphere.cpp
    src/plane.cpp
    src/lambertian.cpp
    src/mirror.cpp
)

target_include_directories(raytracer PRIVATE
    include
    external
)
