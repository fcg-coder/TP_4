# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.26.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.26.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/mak/Документы/Активные проекты/TP/TP4_cmake"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build"

# Include any dependencies generated for this target.
include CMakeFiles/TP4_cmake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TP4_cmake.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TP4_cmake.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP4_cmake.dir/flags.make

CMakeFiles/TP4_cmake.dir/main.cpp.o: CMakeFiles/TP4_cmake.dir/flags.make
CMakeFiles/TP4_cmake.dir/main.cpp.o: /Users/mak/Документы/Активные\ проекты/TP/TP4_cmake/main.cpp
CMakeFiles/TP4_cmake.dir/main.cpp.o: CMakeFiles/TP4_cmake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP4_cmake.dir/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TP4_cmake.dir/main.cpp.o -MF CMakeFiles/TP4_cmake.dir/main.cpp.o.d -o CMakeFiles/TP4_cmake.dir/main.cpp.o -c "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/main.cpp"

CMakeFiles/TP4_cmake.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP4_cmake.dir/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/main.cpp" > CMakeFiles/TP4_cmake.dir/main.cpp.i

CMakeFiles/TP4_cmake.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP4_cmake.dir/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/main.cpp" -o CMakeFiles/TP4_cmake.dir/main.cpp.s

# Object files for target TP4_cmake
TP4_cmake_OBJECTS = \
"CMakeFiles/TP4_cmake.dir/main.cpp.o"

# External object files for target TP4_cmake
TP4_cmake_EXTERNAL_OBJECTS =

TP4_cmake: CMakeFiles/TP4_cmake.dir/main.cpp.o
TP4_cmake: CMakeFiles/TP4_cmake.dir/build.make
TP4_cmake: CMakeFiles/TP4_cmake.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TP4_cmake"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP4_cmake.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP4_cmake.dir/build: TP4_cmake
.PHONY : CMakeFiles/TP4_cmake.dir/build

CMakeFiles/TP4_cmake.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP4_cmake.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP4_cmake.dir/clean

CMakeFiles/TP4_cmake.dir/depend:
	cd "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/mak/Документы/Активные проекты/TP/TP4_cmake" "/Users/mak/Документы/Активные проекты/TP/TP4_cmake" "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build" "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build" "/Users/mak/Документы/Активные проекты/TP/TP4_cmake/build/CMakeFiles/TP4_cmake.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TP4_cmake.dir/depend

