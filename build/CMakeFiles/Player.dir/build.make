# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.5/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.5/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/minjung-gong/myapp/PJfolder/unix-pj

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/minjung-gong/myapp/PJfolder/unix-pj/build

# Include any dependencies generated for this target.
include CMakeFiles/Player.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Player.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Player.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Player.dir/flags.make

CMakeFiles/Player.dir/src/Player.c.o: CMakeFiles/Player.dir/flags.make
CMakeFiles/Player.dir/src/Player.c.o: /Users/minjung-gong/myapp/PJfolder/unix-pj/src/Player.c
CMakeFiles/Player.dir/src/Player.c.o: CMakeFiles/Player.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/minjung-gong/myapp/PJfolder/unix-pj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Player.dir/src/Player.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Player.dir/src/Player.c.o -MF CMakeFiles/Player.dir/src/Player.c.o.d -o CMakeFiles/Player.dir/src/Player.c.o -c /Users/minjung-gong/myapp/PJfolder/unix-pj/src/Player.c

CMakeFiles/Player.dir/src/Player.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/Player.dir/src/Player.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/minjung-gong/myapp/PJfolder/unix-pj/src/Player.c > CMakeFiles/Player.dir/src/Player.c.i

CMakeFiles/Player.dir/src/Player.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/Player.dir/src/Player.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/minjung-gong/myapp/PJfolder/unix-pj/src/Player.c -o CMakeFiles/Player.dir/src/Player.c.s

# Object files for target Player
Player_OBJECTS = \
"CMakeFiles/Player.dir/src/Player.c.o"

# External object files for target Player
Player_EXTERNAL_OBJECTS =

Player: CMakeFiles/Player.dir/src/Player.c.o
Player: CMakeFiles/Player.dir/build.make
Player: liblinkedlist.a
Player: libtextfilewriter.a
Player: CMakeFiles/Player.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/minjung-gong/myapp/PJfolder/unix-pj/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Player"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Player.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Player.dir/build: Player
.PHONY : CMakeFiles/Player.dir/build

CMakeFiles/Player.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Player.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Player.dir/clean

CMakeFiles/Player.dir/depend:
	cd /Users/minjung-gong/myapp/PJfolder/unix-pj/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/minjung-gong/myapp/PJfolder/unix-pj /Users/minjung-gong/myapp/PJfolder/unix-pj /Users/minjung-gong/myapp/PJfolder/unix-pj/build /Users/minjung-gong/myapp/PJfolder/unix-pj/build /Users/minjung-gong/myapp/PJfolder/unix-pj/build/CMakeFiles/Player.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Player.dir/depend
