# CS 3251: Intermediate Software Design
## Programming Assignment 0 - Squirrels

## Objectives
- Introduction to C++ basics:
    - Basic syntax and structure
    - Classes and friendship

## Steps to Get Started

1. Find the green "<> Code" button in your repository home page
2. Get the repository to your laptop
3. Open the project in CLion

## Things to Try

### Get the Code to Compile

Try to compile the code.  It shouldn't compile yet.  See if you can figure what code is needed to get it to compile.

### Get the Code to Pass the Tests

Look in ```src/main.cpp``` and you will see a few simple automated tests.  When you run your project (once you get it to build) it executes these tests.  Modify your code to get it to pass these tests when you run.

### Reload Your CMake

You will need to know how clean out and rebuild your build configuration (Cmake).  This involves deleting the temporary files that are created during the build configuration & process.  Follow these steps to try it:

1. Find the CMake tool window (View >> Tool Windows >> Cmake)
2. Delete the cmake-build-debug folder in your Project browser (right-click and select Delete...)
3. Click the reload button in the tool window (Spin Wheel icon)
4. Check that your build configuration (upper right of window) has "testing" selected
5. Build and run your project