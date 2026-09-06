cmake_minimum_required(VERSION 3.24)
project(Assignment0-Solution)

# Set compiler flags
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -pedantic -pedantic-errors -g")

# Define all testing related content here
enable_testing()
include(FetchContent)

# Bring in GoogleTest library v1.14.0
FetchContent_Declare(googletest URL https://github.com/google/googletest/archive/refs/tags/v1.18.0.tar.gz)
FetchContent_MakeAvailable(googletest)

# Include project headers
include_directories(./include)

# Make the project root directory the working directory when we run
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Define the source files and dependencies for the executable
set(TEST_FILES src/main.cpp src/squirrel.cpp
)
add_executable(testing ${TEST_FILES})
add_dependencies(testing gtest)
target_link_libraries(testing gtest)
