# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/edb/analiseEmpirica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/edb/analiseEmpirica/build

# Include any dependencies generated for this target.
include CMakeFiles/analyze.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/analyze.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/analyze.dir/flags.make

CMakeFiles/analyze.dir/src/main.cpp.o: CMakeFiles/analyze.dir/flags.make
CMakeFiles/analyze.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/edb/analiseEmpirica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/analyze.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/analyze.dir/src/main.cpp.o -c /mnt/c/edb/analiseEmpirica/src/main.cpp

CMakeFiles/analyze.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/analyze.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/edb/analiseEmpirica/src/main.cpp > CMakeFiles/analyze.dir/src/main.cpp.i

CMakeFiles/analyze.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/analyze.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/edb/analiseEmpirica/src/main.cpp -o CMakeFiles/analyze.dir/src/main.cpp.s

CMakeFiles/analyze.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/analyze.dir/src/main.cpp.o.requires

CMakeFiles/analyze.dir/src/main.cpp.o.provides: CMakeFiles/analyze.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/analyze.dir/build.make CMakeFiles/analyze.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/analyze.dir/src/main.cpp.o.provides

CMakeFiles/analyze.dir/src/main.cpp.o.provides.build: CMakeFiles/analyze.dir/src/main.cpp.o


# Object files for target analyze
analyze_OBJECTS = \
"CMakeFiles/analyze.dir/src/main.cpp.o"

# External object files for target analyze
analyze_EXTERNAL_OBJECTS =

analyze: CMakeFiles/analyze.dir/src/main.cpp.o
analyze: CMakeFiles/analyze.dir/build.make
analyze: CMakeFiles/analyze.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/edb/analiseEmpirica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable analyze"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/analyze.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/analyze.dir/build: analyze

.PHONY : CMakeFiles/analyze.dir/build

CMakeFiles/analyze.dir/requires: CMakeFiles/analyze.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/analyze.dir/requires

CMakeFiles/analyze.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/analyze.dir/cmake_clean.cmake
.PHONY : CMakeFiles/analyze.dir/clean

CMakeFiles/analyze.dir/depend:
	cd /mnt/c/edb/analiseEmpirica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/edb/analiseEmpirica /mnt/c/edb/analiseEmpirica /mnt/c/edb/analiseEmpirica/build /mnt/c/edb/analiseEmpirica/build /mnt/c/edb/analiseEmpirica/build/CMakeFiles/analyze.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/analyze.dir/depend

