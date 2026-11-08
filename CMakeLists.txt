cmake_minimum_required(VERSION 3.16)

project(RespiraVision VERSION 0.1.0 LANGUAGES CXX)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Create executable
add_executable(respiravision
    src/main.cpp
    src/Image.cpp
)

# Include header directory
target_include_directories(respiravision
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)