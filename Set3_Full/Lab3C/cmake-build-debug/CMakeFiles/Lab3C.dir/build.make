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
CMAKE_SOURCE_DIR = "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab3C.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab3C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab3C.dir/flags.make

CMakeFiles/Lab3C.dir/main.cpp.obj: CMakeFiles/Lab3C.dir/flags.make
CMakeFiles/Lab3C.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab3C.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lab3C.dir\main.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\main.cpp"

CMakeFiles/Lab3C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab3C.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\main.cpp" > CMakeFiles\Lab3C.dir\main.cpp.i

CMakeFiles/Lab3C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab3C.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\main.cpp" -o CMakeFiles\Lab3C.dir\main.cpp.s

# Object files for target Lab3C
Lab3C_OBJECTS = \
"CMakeFiles/Lab3C.dir/main.cpp.obj"

# External object files for target Lab3C
Lab3C_EXTERNAL_OBJECTS =

Lab3C.exe: CMakeFiles/Lab3C.dir/main.cpp.obj
Lab3C.exe: CMakeFiles/Lab3C.dir/build.make
Lab3C.exe: CMakeFiles/Lab3C.dir/linklibs.rsp
Lab3C.exe: CMakeFiles/Lab3C.dir/objects1.rsp
Lab3C.exe: CMakeFiles/Lab3C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab3C.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lab3C.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab3C.dir/build: Lab3C.exe

.PHONY : CMakeFiles/Lab3C.dir/build

CMakeFiles/Lab3C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab3C.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lab3C.dir/clean

CMakeFiles/Lab3C.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C" "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C" "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set3\Lab3C\cmake-build-debug\CMakeFiles\Lab3C.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab3C.dir/depend

