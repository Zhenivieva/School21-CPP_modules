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
CMAKE_SOURCE_DIR = /Users/mmaryjan/projects/cpp/day08/ex01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/easyfind.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/easyfind.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/easyfind.dir/flags.make

CMakeFiles/easyfind.dir/Bureaucrat.cpp.o: CMakeFiles/easyfind.dir/flags.make
CMakeFiles/easyfind.dir/Bureaucrat.cpp.o: ../Bureaucrat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/easyfind.dir/Bureaucrat.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/easyfind.dir/Bureaucrat.cpp.o -c /Users/mmaryjan/projects/cpp/day08/ex01/Bureaucrat.cpp

CMakeFiles/easyfind.dir/Bureaucrat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/easyfind.dir/Bureaucrat.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day08/ex01/Bureaucrat.cpp > CMakeFiles/easyfind.dir/Bureaucrat.cpp.i

CMakeFiles/easyfind.dir/Bureaucrat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/easyfind.dir/Bureaucrat.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day08/ex01/Bureaucrat.cpp -o CMakeFiles/easyfind.dir/Bureaucrat.cpp.s

CMakeFiles/easyfind.dir/main.cpp.o: CMakeFiles/easyfind.dir/flags.make
CMakeFiles/easyfind.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/easyfind.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/easyfind.dir/main.cpp.o -c /Users/mmaryjan/projects/cpp/day08/ex01/main.cpp

CMakeFiles/easyfind.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/easyfind.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day08/ex01/main.cpp > CMakeFiles/easyfind.dir/main.cpp.i

CMakeFiles/easyfind.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/easyfind.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day08/ex01/main.cpp -o CMakeFiles/easyfind.dir/main.cpp.s

# Object files for target easyfind
easyfind_OBJECTS = \
"CMakeFiles/easyfind.dir/Bureaucrat.cpp.o" \
"CMakeFiles/easyfind.dir/main.cpp.o"

# External object files for target easyfind
easyfind_EXTERNAL_OBJECTS =

easyfind: CMakeFiles/easyfind.dir/Bureaucrat.cpp.o
easyfind: CMakeFiles/easyfind.dir/main.cpp.o
easyfind: CMakeFiles/easyfind.dir/build.make
easyfind: CMakeFiles/easyfind.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable easyfind"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/easyfind.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/easyfind.dir/build: easyfind

.PHONY : CMakeFiles/easyfind.dir/build

CMakeFiles/easyfind.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/easyfind.dir/cmake_clean.cmake
.PHONY : CMakeFiles/easyfind.dir/clean

CMakeFiles/easyfind.dir/depend:
	cd /Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmaryjan/projects/cpp/day08/ex01 /Users/mmaryjan/projects/cpp/day08/ex01 /Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day08/ex01/cmake-build-debug/CMakeFiles/easyfind.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/easyfind.dir/depend
