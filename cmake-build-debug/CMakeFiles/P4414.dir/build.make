# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = "D:\Program Files\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\CLion 2021.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\CLionProjects\luogu

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/P4414.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/P4414.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/P4414.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/P4414.dir/flags.make

CMakeFiles/P4414.dir/branch/P4414.cpp.obj: CMakeFiles/P4414.dir/flags.make
CMakeFiles/P4414.dir/branch/P4414.cpp.obj: ../branch/P4414.cpp
CMakeFiles/P4414.dir/branch/P4414.cpp.obj: CMakeFiles/P4414.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/P4414.dir/branch/P4414.cpp.obj"
	"D:\Program Files\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/P4414.dir/branch/P4414.cpp.obj -MF CMakeFiles\P4414.dir\branch\P4414.cpp.obj.d -o CMakeFiles\P4414.dir\branch\P4414.cpp.obj -c C:\Users\Administrator\CLionProjects\luogu\branch\P4414.cpp

CMakeFiles/P4414.dir/branch/P4414.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/P4414.dir/branch/P4414.cpp.i"
	"D:\Program Files\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Administrator\CLionProjects\luogu\branch\P4414.cpp > CMakeFiles\P4414.dir\branch\P4414.cpp.i

CMakeFiles/P4414.dir/branch/P4414.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/P4414.dir/branch/P4414.cpp.s"
	"D:\Program Files\CLion 2021.3.2\bin\mingw\bin\g++.exe" $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Administrator\CLionProjects\luogu\branch\P4414.cpp -o CMakeFiles\P4414.dir\branch\P4414.cpp.s

# Object files for target P4414
P4414_OBJECTS = \
"CMakeFiles/P4414.dir/branch/P4414.cpp.obj"

# External object files for target P4414
P4414_EXTERNAL_OBJECTS =

P4414.exe: CMakeFiles/P4414.dir/branch/P4414.cpp.obj
P4414.exe: CMakeFiles/P4414.dir/build.make
P4414.exe: CMakeFiles/P4414.dir/linklibs.rsp
P4414.exe: CMakeFiles/P4414.dir/objects1.rsp
P4414.exe: CMakeFiles/P4414.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable P4414.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\P4414.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/P4414.dir/build: P4414.exe
.PHONY : CMakeFiles/P4414.dir/build

CMakeFiles/P4414.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\P4414.dir\cmake_clean.cmake
.PHONY : CMakeFiles/P4414.dir/clean

CMakeFiles/P4414.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\CLionProjects\luogu C:\Users\Administrator\CLionProjects\luogu C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug C:\Users\Administrator\CLionProjects\luogu\cmake-build-debug\CMakeFiles\P4414.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/P4414.dir/depend

