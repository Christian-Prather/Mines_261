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
CMAKE_SOURCE_DIR = "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab2E.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab2E.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab2E.dir/flags.make

CMakeFiles/Lab2E.dir/main.cpp.obj: CMakeFiles/Lab2E.dir/flags.make
CMakeFiles/Lab2E.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab2E.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab2E.dir\main.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\main.cpp"

CMakeFiles/Lab2E.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab2E.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\main.cpp" > CMakeFiles\Lab2E.dir\main.cpp.i

CMakeFiles/Lab2E.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab2E.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\main.cpp" -o CMakeFiles\Lab2E.dir\main.cpp.s

# Object files for target Lab2E
Lab2E_OBJECTS = \
"CMakeFiles/Lab2E.dir/main.cpp.obj"

# External object files for target Lab2E
Lab2E_EXTERNAL_OBJECTS =

Lab2E.exe: CMakeFiles/Lab2E.dir/main.cpp.obj
Lab2E.exe: CMakeFiles/Lab2E.dir/build.make
Lab2E.exe: CMakeFiles/Lab2E.dir/linklibs.rsp
Lab2E.exe: CMakeFiles/Lab2E.dir/objects1.rsp
Lab2E.exe: CMakeFiles/Lab2E.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab2E.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab2E.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab2E.dir/build: Lab2E.exe

.PHONY : CMakeFiles/Lab2E.dir/build

CMakeFiles/Lab2E.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab2E.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab2E.dir/clean

CMakeFiles/Lab2E.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E" "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E" "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set2_Full\L2E\cmake-build-debug\CMakeFiles\Lab2E.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab2E.dir/depend

