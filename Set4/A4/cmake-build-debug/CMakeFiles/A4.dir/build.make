# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\clems\Documents\CSC MINES\Set4\A4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A4.dir/flags.make

CMakeFiles/A4.dir/main.cpp.obj: CMakeFiles/A4.dir/flags.make
CMakeFiles/A4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A4.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A4.dir\main.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set4\A4\main.cpp"

CMakeFiles/A4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A4.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set4\A4\main.cpp" > CMakeFiles\A4.dir\main.cpp.i

CMakeFiles/A4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A4.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set4\A4\main.cpp" -o CMakeFiles\A4.dir\main.cpp.s

CMakeFiles/A4.dir/calculations.cpp.obj: CMakeFiles/A4.dir/flags.make
CMakeFiles/A4.dir/calculations.cpp.obj: ../calculations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/A4.dir/calculations.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A4.dir\calculations.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set4\A4\calculations.cpp"

CMakeFiles/A4.dir/calculations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A4.dir/calculations.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set4\A4\calculations.cpp" > CMakeFiles\A4.dir\calculations.cpp.i

CMakeFiles/A4.dir/calculations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A4.dir/calculations.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set4\A4\calculations.cpp" -o CMakeFiles\A4.dir\calculations.cpp.s

# Object files for target A4
A4_OBJECTS = \
"CMakeFiles/A4.dir/main.cpp.obj" \
"CMakeFiles/A4.dir/calculations.cpp.obj"

# External object files for target A4
A4_EXTERNAL_OBJECTS =

A4.exe: CMakeFiles/A4.dir/main.cpp.obj
A4.exe: CMakeFiles/A4.dir/calculations.cpp.obj
A4.exe: CMakeFiles/A4.dir/build.make
A4.exe: CMakeFiles/A4.dir/linklibs.rsp
A4.exe: CMakeFiles/A4.dir/objects1.rsp
A4.exe: CMakeFiles/A4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable A4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A4.dir/build: A4.exe

.PHONY : CMakeFiles/A4.dir/build

CMakeFiles/A4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\A4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/A4.dir/clean

CMakeFiles/A4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\clems\Documents\CSC MINES\Set4\A4" "C:\Users\clems\Documents\CSC MINES\Set4\A4" "C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set4\A4\cmake-build-debug\CMakeFiles\A4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A4.dir/depend
