# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/jenga/Documents/programs/litE/glfw-3.4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jenga/Documents/programs/litE/glfw-3.4

# Include any dependencies generated for this target.
include examples/CMakeFiles/heightmap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/heightmap.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/heightmap.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/heightmap.dir/flags.make

examples/CMakeFiles/heightmap.dir/heightmap.c.o: examples/CMakeFiles/heightmap.dir/flags.make
examples/CMakeFiles/heightmap.dir/heightmap.c.o: examples/heightmap.c
examples/CMakeFiles/heightmap.dir/heightmap.c.o: examples/CMakeFiles/heightmap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jenga/Documents/programs/litE/glfw-3.4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/heightmap.dir/heightmap.c.o"
	cd /home/jenga/Documents/programs/litE/glfw-3.4/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT examples/CMakeFiles/heightmap.dir/heightmap.c.o -MF CMakeFiles/heightmap.dir/heightmap.c.o.d -o CMakeFiles/heightmap.dir/heightmap.c.o -c /home/jenga/Documents/programs/litE/glfw-3.4/examples/heightmap.c

examples/CMakeFiles/heightmap.dir/heightmap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/heightmap.dir/heightmap.c.i"
	cd /home/jenga/Documents/programs/litE/glfw-3.4/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jenga/Documents/programs/litE/glfw-3.4/examples/heightmap.c > CMakeFiles/heightmap.dir/heightmap.c.i

examples/CMakeFiles/heightmap.dir/heightmap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/heightmap.dir/heightmap.c.s"
	cd /home/jenga/Documents/programs/litE/glfw-3.4/examples && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jenga/Documents/programs/litE/glfw-3.4/examples/heightmap.c -o CMakeFiles/heightmap.dir/heightmap.c.s

# Object files for target heightmap
heightmap_OBJECTS = \
"CMakeFiles/heightmap.dir/heightmap.c.o"

# External object files for target heightmap
heightmap_EXTERNAL_OBJECTS =

examples/heightmap: examples/CMakeFiles/heightmap.dir/heightmap.c.o
examples/heightmap: examples/CMakeFiles/heightmap.dir/build.make
examples/heightmap: src/libglfw3.a
examples/heightmap: /usr/lib/libm.so
examples/heightmap: /usr/lib/librt.a
examples/heightmap: /usr/lib/libm.so
examples/heightmap: examples/CMakeFiles/heightmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jenga/Documents/programs/litE/glfw-3.4/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable heightmap"
	cd /home/jenga/Documents/programs/litE/glfw-3.4/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/heightmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/heightmap.dir/build: examples/heightmap
.PHONY : examples/CMakeFiles/heightmap.dir/build

examples/CMakeFiles/heightmap.dir/clean:
	cd /home/jenga/Documents/programs/litE/glfw-3.4/examples && $(CMAKE_COMMAND) -P CMakeFiles/heightmap.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/heightmap.dir/clean

examples/CMakeFiles/heightmap.dir/depend:
	cd /home/jenga/Documents/programs/litE/glfw-3.4 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jenga/Documents/programs/litE/glfw-3.4 /home/jenga/Documents/programs/litE/glfw-3.4/examples /home/jenga/Documents/programs/litE/glfw-3.4 /home/jenga/Documents/programs/litE/glfw-3.4/examples /home/jenga/Documents/programs/litE/glfw-3.4/examples/CMakeFiles/heightmap.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : examples/CMakeFiles/heightmap.dir/depend

