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
include CMakeFiles/form.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/form.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/form.dir/flags.make

CMakeFiles/form.dir/Bureaucrat.cpp.o: CMakeFiles/form.dir/flags.make
CMakeFiles/form.dir/Bureaucrat.cpp.o: ../Bureaucrat.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/form.dir/Bureaucrat.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/form.dir/Bureaucrat.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp

CMakeFiles/form.dir/Bureaucrat.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/form.dir/Bureaucrat.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp > CMakeFiles/form.dir/Bureaucrat.cpp.i

CMakeFiles/form.dir/Bureaucrat.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/form.dir/Bureaucrat.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/Bureaucrat.cpp -o CMakeFiles/form.dir/Bureaucrat.cpp.s

CMakeFiles/form.dir/Form.cpp.o: CMakeFiles/form.dir/flags.make
CMakeFiles/form.dir/Form.cpp.o: ../Form.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/form.dir/Form.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/form.dir/Form.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp

CMakeFiles/form.dir/Form.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/form.dir/Form.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp > CMakeFiles/form.dir/Form.cpp.i

CMakeFiles/form.dir/Form.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/form.dir/Form.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/Form.cpp -o CMakeFiles/form.dir/Form.cpp.s

CMakeFiles/form.dir/main.cpp.o: CMakeFiles/form.dir/flags.make
CMakeFiles/form.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/form.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/form.dir/main.cpp.o -c /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp

CMakeFiles/form.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/form.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp > CMakeFiles/form.dir/main.cpp.i

CMakeFiles/form.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/form.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mmaryjan/projects/cpp/day05/ex01/main.cpp -o CMakeFiles/form.dir/main.cpp.s

# Object files for target form
form_OBJECTS = \
"CMakeFiles/form.dir/Bureaucrat.cpp.o" \
"CMakeFiles/form.dir/Form.cpp.o" \
"CMakeFiles/form.dir/main.cpp.o"

# External object files for target form
form_EXTERNAL_OBJECTS =

form: CMakeFiles/form.dir/Bureaucrat.cpp.o
form: CMakeFiles/form.dir/Form.cpp.o
form: CMakeFiles/form.dir/main.cpp.o
form: CMakeFiles/form.dir/build.make
form: CMakeFiles/form.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable form"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/form.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/form.dir/build: form

.PHONY : CMakeFiles/form.dir/build

CMakeFiles/form.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/form.dir/cmake_clean.cmake
.PHONY : CMakeFiles/form.dir/clean

CMakeFiles/form.dir/depend:
	cd /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mmaryjan/projects/cpp/day05/ex01 /Users/mmaryjan/projects/cpp/day05/ex01 /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug /Users/mmaryjan/projects/cpp/day05/ex01/cmake-build-debug/CMakeFiles/form.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/form.dir/depend

