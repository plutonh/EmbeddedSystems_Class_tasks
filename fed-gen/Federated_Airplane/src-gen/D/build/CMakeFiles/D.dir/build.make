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
CMAKE_SOURCE_DIR = /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build

# Include any dependencies generated for this target.
include CMakeFiles/D.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/D.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/D.dir/flags.make

CMakeFiles/D.dir/lib/schedule.c.o: CMakeFiles/D.dir/flags.make
CMakeFiles/D.dir/lib/schedule.c.o: ../lib/schedule.c
CMakeFiles/D.dir/lib/schedule.c.o: CMakeFiles/D.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/D.dir/lib/schedule.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/D.dir/lib/schedule.c.o -MF CMakeFiles/D.dir/lib/schedule.c.o.d -o CMakeFiles/D.dir/lib/schedule.c.o -c /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/lib/schedule.c

CMakeFiles/D.dir/lib/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/D.dir/lib/schedule.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/lib/schedule.c > CMakeFiles/D.dir/lib/schedule.c.i

CMakeFiles/D.dir/lib/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/D.dir/lib/schedule.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/lib/schedule.c -o CMakeFiles/D.dir/lib/schedule.c.s

CMakeFiles/D.dir/D.c.o: CMakeFiles/D.dir/flags.make
CMakeFiles/D.dir/D.c.o: ../D.c
CMakeFiles/D.dir/D.c.o: CMakeFiles/D.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/D.dir/D.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/D.dir/D.c.o -MF CMakeFiles/D.dir/D.c.o.d -o CMakeFiles/D.dir/D.c.o -c /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/D.c

CMakeFiles/D.dir/D.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/D.dir/D.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/D.c > CMakeFiles/D.dir/D.c.i

CMakeFiles/D.dir/D.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/D.dir/D.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/D.c -o CMakeFiles/D.dir/D.c.s

# Object files for target D
D_OBJECTS = \
"CMakeFiles/D.dir/lib/schedule.c.o" \
"CMakeFiles/D.dir/D.c.o"

# External object files for target D
D_EXTERNAL_OBJECTS =

D : CMakeFiles/D.dir/lib/schedule.c.o
D : CMakeFiles/D.dir/D.c.o
D : CMakeFiles/D.dir/build.make
D : core/libcore.a
D : CMakeFiles/D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/D.dir/build: D
.PHONY : CMakeFiles/D.dir/build

CMakeFiles/D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/D.dir/clean

CMakeFiles/D.dir/depend:
	cd /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build /home/plutonh/project/fed-gen/Federated_Airplane/src-gen/D/build/CMakeFiles/D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/D.dir/depend
