# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/christian/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/christian/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/christian/Documents/Mines_261/Set6_Full/L6A

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/L6A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L6A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L6A.dir/flags.make

CMakeFiles/L6A.dir/main.cpp.o: CMakeFiles/L6A.dir/flags.make
CMakeFiles/L6A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/L6A.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/L6A.dir/main.cpp.o -c /home/christian/Documents/Mines_261/Set6_Full/L6A/main.cpp

CMakeFiles/L6A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/L6A.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/christian/Documents/Mines_261/Set6_Full/L6A/main.cpp > CMakeFiles/L6A.dir/main.cpp.i

CMakeFiles/L6A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/L6A.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/christian/Documents/Mines_261/Set6_Full/L6A/main.cpp -o CMakeFiles/L6A.dir/main.cpp.s

# Object files for target L6A
L6A_OBJECTS = \
"CMakeFiles/L6A.dir/main.cpp.o"

# External object files for target L6A
L6A_EXTERNAL_OBJECTS =

L6A: CMakeFiles/L6A.dir/main.cpp.o
L6A: CMakeFiles/L6A.dir/build.make
L6A: CMakeFiles/L6A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable L6A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/L6A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L6A.dir/build: L6A

.PHONY : CMakeFiles/L6A.dir/build

CMakeFiles/L6A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/L6A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/L6A.dir/clean

CMakeFiles/L6A.dir/depend:
	cd /home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/christian/Documents/Mines_261/Set6_Full/L6A /home/christian/Documents/Mines_261/Set6_Full/L6A /home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug /home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug /home/christian/Documents/Mines_261/Set6_Full/L6A/cmake-build-debug/CMakeFiles/L6A.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/L6A.dir/depend

