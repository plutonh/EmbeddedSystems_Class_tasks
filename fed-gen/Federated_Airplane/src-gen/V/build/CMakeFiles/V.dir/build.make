# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build

# Include any dependencies generated for this target.
include CMakeFiles/V.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/V.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/V.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/V.dir/flags.make

CMakeFiles/V.dir/lib/schedule.c.o: CMakeFiles/V.dir/flags.make
CMakeFiles/V.dir/lib/schedule.c.o: ../lib/schedule.c
CMakeFiles/V.dir/lib/schedule.c.o: CMakeFiles/V.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/V.dir/lib/schedule.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/V.dir/lib/schedule.c.o -MF CMakeFiles/V.dir/lib/schedule.c.o.d -o CMakeFiles/V.dir/lib/schedule.c.o -c /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/lib/schedule.c

CMakeFiles/V.dir/lib/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/V.dir/lib/schedule.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/lib/schedule.c > CMakeFiles/V.dir/lib/schedule.c.i

CMakeFiles/V.dir/lib/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/V.dir/lib/schedule.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/lib/schedule.c -o CMakeFiles/V.dir/lib/schedule.c.s

CMakeFiles/V.dir/V.c.o: CMakeFiles/V.dir/flags.make
CMakeFiles/V.dir/V.c.o: ../V.c
CMakeFiles/V.dir/V.c.o: CMakeFiles/V.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/V.dir/V.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/V.dir/V.c.o -MF CMakeFiles/V.dir/V.c.o.d -o CMakeFiles/V.dir/V.c.o -c /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/V.c

CMakeFiles/V.dir/V.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/V.dir/V.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/V.c > CMakeFiles/V.dir/V.c.i

CMakeFiles/V.dir/V.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/V.dir/V.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/V.c -o CMakeFiles/V.dir/V.c.s

# Object files for target V
V_OBJECTS = \
"CMakeFiles/V.dir/lib/schedule.c.o" \
"CMakeFiles/V.dir/V.c.o"

# External object files for target V
V_EXTERNAL_OBJECTS =

V : CMakeFiles/V.dir/lib/schedule.c.o
V : CMakeFiles/V.dir/V.c.o
V : CMakeFiles/V.dir/build.make
V : core/libcore.a
V : CMakeFiles/V.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable V"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/V.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/V.dir/build: V
.PHONY : CMakeFiles/V.dir/build

CMakeFiles/V.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/V.dir/cmake_clean.cmake
.PHONY : CMakeFiles/V.dir/clean

CMakeFiles/V.dir/depend:
	cd /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/V/build/CMakeFiles/V.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/V.dir/depend
