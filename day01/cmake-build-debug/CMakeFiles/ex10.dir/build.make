# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/2016/p/ppanchen/projects/piscine_cpp/day01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex10.dir/flags.make

CMakeFiles/ex10.dir/ex10/main.cpp.o: CMakeFiles/ex10.dir/flags.make
CMakeFiles/ex10.dir/ex10/main.cpp.o: ../ex10/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex10.dir/ex10/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex10.dir/ex10/main.cpp.o -c /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/ex10/main.cpp

CMakeFiles/ex10.dir/ex10/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex10.dir/ex10/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/ex10/main.cpp > CMakeFiles/ex10.dir/ex10/main.cpp.i

CMakeFiles/ex10.dir/ex10/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex10.dir/ex10/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/ex10/main.cpp -o CMakeFiles/ex10.dir/ex10/main.cpp.s

CMakeFiles/ex10.dir/ex10/main.cpp.o.requires:

.PHONY : CMakeFiles/ex10.dir/ex10/main.cpp.o.requires

CMakeFiles/ex10.dir/ex10/main.cpp.o.provides: CMakeFiles/ex10.dir/ex10/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ex10.dir/build.make CMakeFiles/ex10.dir/ex10/main.cpp.o.provides.build
.PHONY : CMakeFiles/ex10.dir/ex10/main.cpp.o.provides

CMakeFiles/ex10.dir/ex10/main.cpp.o.provides.build: CMakeFiles/ex10.dir/ex10/main.cpp.o


# Object files for target ex10
ex10_OBJECTS = \
"CMakeFiles/ex10.dir/ex10/main.cpp.o"

# External object files for target ex10
ex10_EXTERNAL_OBJECTS =

ex10: CMakeFiles/ex10.dir/ex10/main.cpp.o
ex10: CMakeFiles/ex10.dir/build.make
ex10: CMakeFiles/ex10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex10.dir/build: ex10

.PHONY : CMakeFiles/ex10.dir/build

CMakeFiles/ex10.dir/requires: CMakeFiles/ex10.dir/ex10/main.cpp.o.requires

.PHONY : CMakeFiles/ex10.dir/requires

CMakeFiles/ex10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex10.dir/clean

CMakeFiles/ex10.dir/depend:
	cd /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2016/p/ppanchen/projects/piscine_cpp/day01 /nfs/2016/p/ppanchen/projects/piscine_cpp/day01 /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug /nfs/2016/p/ppanchen/projects/piscine_cpp/day01/cmake-build-debug/CMakeFiles/ex10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex10.dir/depend

