# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/cmake-build-debug-rpi-remote

# Include any dependencies generated for this target.
include CMakeFiles/MRT_Fibonaci.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MRT_Fibonaci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MRT_Fibonaci.dir/flags.make

CMakeFiles/MRT_Fibonaci.dir/test.c.o: CMakeFiles/MRT_Fibonaci.dir/flags.make
CMakeFiles/MRT_Fibonaci.dir/test.c.o: ../test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/cmake-build-debug-rpi-remote/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MRT_Fibonaci.dir/test.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MRT_Fibonaci.dir/test.c.o -c /home/pi/test.c

CMakeFiles/MRT_Fibonaci.dir/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MRT_Fibonaci.dir/test.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/pi/test.c > CMakeFiles/MRT_Fibonaci.dir/test.c.i

CMakeFiles/MRT_Fibonaci.dir/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MRT_Fibonaci.dir/test.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/pi/test.c -o CMakeFiles/MRT_Fibonaci.dir/test.c.s

# Object files for target MRT_Fibonaci
MRT_Fibonaci_OBJECTS = \
"CMakeFiles/MRT_Fibonaci.dir/test.c.o"

# External object files for target MRT_Fibonaci
MRT_Fibonaci_EXTERNAL_OBJECTS =

MRT_Fibonaci: CMakeFiles/MRT_Fibonaci.dir/test.c.o
MRT_Fibonaci: CMakeFiles/MRT_Fibonaci.dir/build.make
MRT_Fibonaci: CMakeFiles/MRT_Fibonaci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/cmake-build-debug-rpi-remote/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable MRT_Fibonaci"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MRT_Fibonaci.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MRT_Fibonaci.dir/build: MRT_Fibonaci

.PHONY : CMakeFiles/MRT_Fibonaci.dir/build

CMakeFiles/MRT_Fibonaci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MRT_Fibonaci.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MRT_Fibonaci.dir/clean

CMakeFiles/MRT_Fibonaci.dir/depend:
	cd /home/pi/cmake-build-debug-rpi-remote && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi /home/pi /home/pi/cmake-build-debug-rpi-remote /home/pi/cmake-build-debug-rpi-remote /home/pi/cmake-build-debug-rpi-remote/CMakeFiles/MRT_Fibonaci.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MRT_Fibonaci.dir/depend

