# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\projects\c projects\project"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\projects\c projects\project\build"

# Include any dependencies generated for this target.
include ,library1/CMakeFiles/library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include ,library1/CMakeFiles/library.dir/compiler_depend.make

# Include the progress variables for this target.
include ,library1/CMakeFiles/library.dir/progress.make

# Include the compile flags for this target's objects.
include ,library1/CMakeFiles/library.dir/flags.make

,library1/CMakeFiles/library.dir/random.c.obj: ,library1/CMakeFiles/library.dir/flags.make
,library1/CMakeFiles/library.dir/random.c.obj: D:/projects/c\ projects/project/library/random.c
,library1/CMakeFiles/library.dir/random.c.obj: ,library1/CMakeFiles/library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\projects\c projects\project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object ,library1/CMakeFiles/library.dir/random.c.obj"
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && D:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT ,library1/CMakeFiles/library.dir/random.c.obj -MF CMakeFiles\library.dir\random.c.obj.d -o CMakeFiles\library.dir\random.c.obj -c "D:\projects\c projects\project\library\random.c"

,library1/CMakeFiles/library.dir/random.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/library.dir/random.c.i"
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && D:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\projects\c projects\project\library\random.c" > CMakeFiles\library.dir\random.c.i

,library1/CMakeFiles/library.dir/random.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/library.dir/random.c.s"
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && D:\MinGW\bin\mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\projects\c projects\project\library\random.c" -o CMakeFiles\library.dir\random.c.s

# Object files for target library
library_OBJECTS = \
"CMakeFiles/library.dir/random.c.obj"

# External object files for target library
library_EXTERNAL_OBJECTS =

,library1/liblibrary.a: ,library1/CMakeFiles/library.dir/random.c.obj
,library1/liblibrary.a: ,library1/CMakeFiles/library.dir/build.make
,library1/liblibrary.a: ,library1/CMakeFiles/library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\projects\c projects\project\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library liblibrary.a"
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && $(CMAKE_COMMAND) -P CMakeFiles\library.dir\cmake_clean_target.cmake
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\library.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
,library1/CMakeFiles/library.dir/build: ,library1/liblibrary.a
.PHONY : ,library1/CMakeFiles/library.dir/build

,library1/CMakeFiles/library.dir/clean:
	cd /d D:\projects\CPROJE~1\project\build\_LIBRA~1 && $(CMAKE_COMMAND) -P CMakeFiles\library.dir\cmake_clean.cmake
.PHONY : ,library1/CMakeFiles/library.dir/clean

,library1/CMakeFiles/library.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\projects\c projects\project" "D:\projects\c projects\project\library" "D:\projects\c projects\project\build" "D:\projects\c projects\project\build\,library1" "D:\projects\c projects\project\build\,library1\CMakeFiles\library.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : ,library1/CMakeFiles/library.dir/depend

