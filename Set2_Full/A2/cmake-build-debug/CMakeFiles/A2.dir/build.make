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
CMAKE_SOURCE_DIR = "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A2.dir/flags.make

CMakeFiles/A2.dir/main.cpp.obj: CMakeFiles/A2.dir/flags.make
CMakeFiles/A2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A2.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A2.dir\main.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\main.cpp"

CMakeFiles/A2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A2.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\main.cpp" > CMakeFiles\A2.dir\main.cpp.i

CMakeFiles/A2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A2.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\main.cpp" -o CMakeFiles\A2.dir\main.cpp.s

# Object files for target A2
A2_OBJECTS = \
"CMakeFiles/A2.dir/main.cpp.obj"

# External object files for target A2
A2_EXTERNAL_OBJECTS =

A2.exe: CMakeFiles/A2.dir/main.cpp.obj
A2.exe: CMakeFiles/A2.dir/build.make
A2.exe: CMakeFiles/A2.dir/linklibs.rsp
A2.exe: CMakeFiles/A2.dir/objects1.rsp
A2.exe: CMakeFiles/A2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A2.dir/build: A2.exe

.PHONY : CMakeFiles/A2.dir/build

CMakeFiles/A2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\A2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/A2.dir/clean

CMakeFiles/A2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2" "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2" "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set2_Full\A2\cmake-build-debug\CMakeFiles\A2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A2.dir/depend

