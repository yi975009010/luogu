# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\CLion 2021.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2021.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage

# Include any dependencies generated for this target.
include CMakeFiles/P1162.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/P1162.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P1162.dir/flags.make

CMakeFiles/P1162.dir/P1162.cpp.obj: CMakeFiles/P1162.dir/flags.make
CMakeFiles/P1162.dir/P1162.cpp.obj: ../P1162.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P1162.dir/P1162.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P1162.dir\P1162.cpp.obj -c C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\P1162.cpp

CMakeFiles/P1162.dir/P1162.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P1162.dir/P1162.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\P1162.cpp > CMakeFiles\P1162.dir\P1162.cpp.i

CMakeFiles/P1162.dir/P1162.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P1162.dir/P1162.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\P1162.cpp -o CMakeFiles\P1162.dir\P1162.cpp.s

# Object files for target P1162
P1162_OBJECTS = \
"CMakeFiles/P1162.dir/P1162.cpp.obj"

# External object files for target P1162
P1162_EXTERNAL_OBJECTS =

P1162.exe: CMakeFiles/P1162.dir/P1162.cpp.obj
P1162.exe: CMakeFiles/P1162.dir/build.make
P1162.exe: CMakeFiles/P1162.dir/linklibs.rsp
P1162.exe: CMakeFiles/P1162.dir/objects1.rsp
P1162.exe: CMakeFiles/P1162.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P1162.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P1162.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P1162.dir/build: P1162.exe
.PHONY : CMakeFiles/P1162.dir/build

CMakeFiles/P1162.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P1162.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P1162.dir/clean

CMakeFiles/P1162.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles\P1162.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P1162.dir/depend

