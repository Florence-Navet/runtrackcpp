# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = "C:/Program Files/CMake/bin/cmake.exe"

# The command to remove a file.
RM = "C:/Program Files/CMake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build

# Include any dependencies generated for this target.
include CMakeFiles/Dyma.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Dyma.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Dyma.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Dyma.dir/flags.make

CMakeFiles/Dyma.dir/codegen:
.PHONY : CMakeFiles/Dyma.dir/codegen

CMakeFiles/Dyma.dir/src/auto.cpp.obj: CMakeFiles/Dyma.dir/flags.make
CMakeFiles/Dyma.dir/src/auto.cpp.obj: E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/src/auto.cpp
CMakeFiles/Dyma.dir/src/auto.cpp.obj: CMakeFiles/Dyma.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Dyma.dir/src/auto.cpp.obj"
	C:/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Dyma.dir/src/auto.cpp.obj -MF CMakeFiles/Dyma.dir/src/auto.cpp.obj.d -o CMakeFiles/Dyma.dir/src/auto.cpp.obj -c E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/src/auto.cpp

CMakeFiles/Dyma.dir/src/auto.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Dyma.dir/src/auto.cpp.i"
	C:/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/src/auto.cpp > CMakeFiles/Dyma.dir/src/auto.cpp.i

CMakeFiles/Dyma.dir/src/auto.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Dyma.dir/src/auto.cpp.s"
	C:/TDM-GCC-64/bin/g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/src/auto.cpp -o CMakeFiles/Dyma.dir/src/auto.cpp.s

# Object files for target Dyma
Dyma_OBJECTS = \
"CMakeFiles/Dyma.dir/src/auto.cpp.obj"

# External object files for target Dyma
Dyma_EXTERNAL_OBJECTS =

Dyma.exe: CMakeFiles/Dyma.dir/src/auto.cpp.obj
Dyma.exe: CMakeFiles/Dyma.dir/build.make
Dyma.exe: CMakeFiles/Dyma.dir/linkLibs.rsp
Dyma.exe: CMakeFiles/Dyma.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Dyma.exe"
	"C:/Program Files/CMake/bin/cmake.exe" -E rm -f CMakeFiles/Dyma.dir/objects.a
	C:/TDM-GCC-64/bin/ar.exe qc CMakeFiles/Dyma.dir/objects.a @CMakeFiles/Dyma.dir/objects1.rsp
	C:/TDM-GCC-64/bin/g++.exe -g -Wl,--whole-archive CMakeFiles/Dyma.dir/objects.a -Wl,--no-whole-archive -o Dyma.exe -Wl,--out-implib,libDyma.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Dyma.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/Dyma.dir/build: Dyma.exe
.PHONY : CMakeFiles/Dyma.dir/build

CMakeFiles/Dyma.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Dyma.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Dyma.dir/clean

CMakeFiles/Dyma.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05 E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05 E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build E:/CODEGITHUB/Codelaplateforme/2025githubflopython/c++/runtrackcpp/Jour05/build/CMakeFiles/Dyma.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Dyma.dir/depend

