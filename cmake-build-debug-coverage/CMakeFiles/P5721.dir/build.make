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
include CMakeFiles/P5721.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/P5721.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P5721.dir/flags.make

CMakeFiles/P5721.dir/circulate/P5721.cpp.obj: CMakeFiles/P5721.dir/flags.make
CMakeFiles/P5721.dir/circulate/P5721.cpp.obj: ../circulate/P5721.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P5721.dir/circulate/P5721.cpp.obj"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\P5721.dir\circulate\P5721.cpp.obj -c C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\circulate\P5721.cpp

CMakeFiles/P5721.dir/circulate/P5721.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P5721.dir/circulate/P5721.cpp.i"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\circulate\P5721.cpp > CMakeFiles\P5721.dir\circulate\P5721.cpp.i

CMakeFiles/P5721.dir/circulate/P5721.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P5721.dir/circulate/P5721.cpp.s"
	C:\MinGW\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\circulate\P5721.cpp -o CMakeFiles\P5721.dir\circulate\P5721.cpp.s

# Object files for target P5721
P5721_OBJECTS = \
"CMakeFiles/P5721.dir/circulate/P5721.cpp.obj"

# External object files for target P5721
P5721_EXTERNAL_OBJECTS =

P5721.exe: CMakeFiles/P5721.dir/circulate/P5721.cpp.obj
P5721.exe: CMakeFiles/P5721.dir/build.make
P5721.exe: CMakeFiles/P5721.dir/linklibs.rsp
P5721.exe: CMakeFiles/P5721.dir/objects1.rsp
P5721.exe: CMakeFiles/P5721.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P5721.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P5721.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P5721.dir/build: P5721.exe
.PHONY : CMakeFiles/P5721.dir/build

CMakeFiles/P5721.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P5721.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P5721.dir/clean

CMakeFiles/P5721.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage C:\Users\lenovo.DESKTOP-FH6F75H\CLionProjects\luogu\cmake-build-debug-coverage\CMakeFiles\P5721.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P5721.dir/depend
