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
CMAKE_SOURCE_DIR = /Users/mmaryjan/projects/cpp/day05/ex01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bureaucrat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bureaucrat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bureaucrat.dir/flags.make

CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o: CMakeFiles/bureaucrat.dir/flags.make
CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o: ../Bureaucrat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp

CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp > CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.i

CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp -o CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.s

CMakeFiles/bureaucrat.dir/Form.cpp.o: CMakeFiles/bureaucrat.dir/flags.make
CMakeFiles/bureaucrat.dir/Form.cpp.o: ../Form.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/bureaucrat.dir/Form.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bureaucrat.dir/Form.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp

CMakeFiles/bureaucrat.dir/Form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bureaucrat.dir/Form.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp > CMakeFiles/bureaucrat.dir/Form.cpp.i

CMakeFiles/bureaucrat.dir/Form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bureaucrat.dir/Form.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp -o CMakeFiles/bureaucrat.dir/Form.cpp.s

CMakeFiles/bureaucrat.dir/main.cpp.o: CMakeFiles/bureaucrat.dir/flags.make
CMakeFiles/bureaucrat.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/bureaucrat.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bureaucrat.dir/main.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp

CMakeFiles/bureaucrat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bureaucrat.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp > CMakeFiles/bureaucrat.dir/main.cpp.i

CMakeFiles/bureaucrat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bureaucrat.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp -o CMakeFiles/bureaucrat.dir/main.cpp.s

# Object files for target bureaucrat
bureaucrat_OBJECTS = \
"CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o" \
"CMakeFiles/bureaucrat.dir/Form.cpp.o" \
"CMakeFiles/bureaucrat.dir/main.cpp.o"

# External object files for target bureaucrat
bureaucrat_EXTERNAL_OBJECTS =

bureaucrat: CMakeFiles/bureaucrat.dir/Bureaucrat.cpp.o
bureaucrat: CMakeFiles/bureaucrat.dir/Form.cpp.o
bureaucrat: CMakeFiles/bureaucrat.dir/main.cpp.o
bureaucrat: CMakeFiles/bureaucrat.dir/build.make
bureaucrat: CMakeFiles/bureaucrat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable bureaucrat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bureaucrat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bureaucrat.dir/build: bureaucrat

.PHONY : CMakeFiles/bureaucrat.dir/build

CMakeFiles/bureaucrat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bureaucrat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bureaucrat.dir/clean

CMakeFiles/bureaucrat.dir/depend:
	cd /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmaryjan/projects/cpp/day05/ex01 /Users/mmaryjan/projects/cpp/day05/ex01 /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles/bureaucrat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bureaucrat.dir/depend

