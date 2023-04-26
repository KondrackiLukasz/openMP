cmake_minimum_required(VERSION 3.21)
project(openMP)

set(CMAKE_CXX_STANDARD 23)

# Find OpenMP
find_package(OpenMP REQUIRED)

add_executable(parallel_playground main.cpp)

# Link OpenMP to your target
if (OpenMP_CXX_FOUND)
    target_link_libraries(parallel_playground PUBLIC OpenMP::OpenMP_CXX)
endif()
