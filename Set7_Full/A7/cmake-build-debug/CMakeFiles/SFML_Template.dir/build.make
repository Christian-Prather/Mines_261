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
CMAKE_SOURCE_DIR = "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/SFML_Template.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SFML_Template.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SFML_Template.dir/flags.make

CMakeFiles/SFML_Template.dir/main.cpp.obj: CMakeFiles/SFML_Template.dir/flags.make
CMakeFiles/SFML_Template.dir/main.cpp.obj: CMakeFiles/SFML_Template.dir/includes_CXX.rsp
CMakeFiles/SFML_Template.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SFML_Template.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SFML_Template.dir\main.cpp.obj -c "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\main.cpp"

CMakeFiles/SFML_Template.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFML_Template.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\main.cpp" > CMakeFiles\SFML_Template.dir\main.cpp.i

CMakeFiles/SFML_Template.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFML_Template.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\main.cpp" -o CMakeFiles\SFML_Template.dir\main.cpp.s

# Object files for target SFML_Template
SFML_Template_OBJECTS = \
"CMakeFiles/SFML_Template.dir/main.cpp.obj"

# External object files for target SFML_Template
SFML_Template_EXTERNAL_OBJECTS =

bin/SFML_Template.exe: CMakeFiles/SFML_Template.dir/main.cpp.obj
bin/SFML_Template.exe: CMakeFiles/SFML_Template.dir/build.make
bin/SFML_Template.exe: CMakeFiles/SFML_Template.dir/linklibs.rsp
bin/SFML_Template.exe: CMakeFiles/SFML_Template.dir/objects1.rsp
bin/SFML_Template.exe: CMakeFiles/SFML_Template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bin\SFML_Template.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SFML_Template.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SFML_Template.dir/build: bin/SFML_Template.exe

.PHONY : CMakeFiles/SFML_Template.dir/build

CMakeFiles/SFML_Template.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SFML_Template.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SFML_Template.dir/clean

CMakeFiles/SFML_Template.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7" "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7" "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug" "C:\Users\clems\Documents\CSC MINES\Set7_Full\A7\cmake-build-debug\CMakeFiles\SFML_Template.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SFML_Template.dir/depend

