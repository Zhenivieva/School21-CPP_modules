# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mmaryjan/projects/cpp/day06/ex02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/identify.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/identify.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/identify.dir/flags.make

CMakeFiles/identify.dir/Base.cpp.o: CMakeFiles/identify.dir/flags.make
CMakeFiles/identify.dir/Base.cpp.o: ../Base.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/identify.dir/Base.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/identify.dir/Base.cpp.o -c /Users/mmaryjan/projects/cpp/day06/ex02/Base.cpp

CMakeFiles/identify.dir/Base.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/identify.dir/Base.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day06/ex02/Base.cpp > CMakeFiles/identify.dir/Base.cpp.i

CMakeFiles/identify.dir/Base.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/identify.dir/Base.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day06/ex02/Base.cpp -o CMakeFiles/identify.dir/Base.cpp.s

CMakeFiles/identify.dir/Identify.cpp.o: CMakeFiles/identify.dir/flags.make
CMakeFiles/identify.dir/Identify.cpp.o: ../Identify.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/identify.dir/Identify.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/identify.dir/Identify.cpp.o -c /Users/mmaryjan/projects/cpp/day06/ex02/Identify.cpp

CMakeFiles/identify.dir/Identify.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/identify.dir/Identify.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day06/ex02/Identify.cpp > CMakeFiles/identify.dir/Identify.cpp.i

CMakeFiles/identify.dir/Identify.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/identify.dir/Identify.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day06/ex02/Identify.cpp -o CMakeFiles/identify.dir/Identify.cpp.s

# Object files for target identify
identify_OBJECTS = \
"CMakeFiles/identify.dir/Base.cpp.o" \
"CMakeFiles/identify.dir/Identify.cpp.o"

# External object files for target identify
identify_EXTERNAL_OBJECTS =

identify: CMakeFiles/identify.dir/Base.cpp.o
identify: CMakeFiles/identify.dir/Identify.cpp.o
identify: CMakeFiles/identify.dir/build.make
identify: CMakeFiles/identify.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable identify"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/identify.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/identify.dir/build: identify

.PHONY : CMakeFiles/identify.dir/build

CMakeFiles/identify.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/identify.dir/cmake_clean.cmake
.PHONY : CMakeFiles/identify.dir/clean

CMakeFiles/identify.dir/depend:
	cd /Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmaryjan/projects/cpp/day06/ex02 /Users/mmaryjan/projects/cpp/day06/ex02 /Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug /Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug /Users/mmaryjan/projects/cpp/day06/ex02/cmake-build-debug/CMakeFiles/identify.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/identify.dir/depend

