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
CMAKE_SOURCE_DIR = /home/plutonh/project/src-gen/HelloWorldPy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/plutonh/project/src-gen/HelloWorldPy/build

# Include any dependencies generated for this target.
include CMakeFiles/LinguaFrancaHelloWorldPy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/LinguaFrancaHelloWorldPy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o: ../lib/schedule.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/schedule.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/schedule.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/schedule.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o: ../lib/python_action.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/python_action.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/python_action.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/python_action.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o: ../lib/python_port.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/python_port.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/python_port.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/python_port.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o: ../lib/python_tag.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/python_tag.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/python_tag.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/python_tag.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o: ../lib/python_time.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/python_time.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/python_time.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/python_time.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o: ../lib/pythontarget.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/lib/pythontarget.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/lib/pythontarget.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/lib/pythontarget.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.s

CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/flags.make
CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o: ../HelloWorldPy.c
CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o: CMakeFiles/LinguaFrancaHelloWorldPy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o -MF CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o.d -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o -c /home/plutonh/project/src-gen/HelloWorldPy/HelloWorldPy.c

CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.i"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/plutonh/project/src-gen/HelloWorldPy/HelloWorldPy.c > CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.i

CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.s"
	gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/plutonh/project/src-gen/HelloWorldPy/HelloWorldPy.c -o CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.s

# Object files for target LinguaFrancaHelloWorldPy
LinguaFrancaHelloWorldPy_OBJECTS = \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o" \
"CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o"

# External object files for target LinguaFrancaHelloWorldPy
LinguaFrancaHelloWorldPy_EXTERNAL_OBJECTS =

../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/schedule.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_action.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_port.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_tag.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/python_time.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/lib/pythontarget.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/HelloWorldPy.c.o
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/build.make
../LinguaFrancaHelloWorldPy.so: /usr/lib/x86_64-linux-gnu/libpython3.10.so
../LinguaFrancaHelloWorldPy.so: core/libcore.a
../LinguaFrancaHelloWorldPy.so: CMakeFiles/LinguaFrancaHelloWorldPy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C shared module ../LinguaFrancaHelloWorldPy.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinguaFrancaHelloWorldPy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinguaFrancaHelloWorldPy.dir/build: ../LinguaFrancaHelloWorldPy.so
.PHONY : CMakeFiles/LinguaFrancaHelloWorldPy.dir/build

CMakeFiles/LinguaFrancaHelloWorldPy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinguaFrancaHelloWorldPy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinguaFrancaHelloWorldPy.dir/clean

CMakeFiles/LinguaFrancaHelloWorldPy.dir/depend:
	cd /home/plutonh/project/src-gen/HelloWorldPy/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/plutonh/project/src-gen/HelloWorldPy /home/plutonh/project/src-gen/HelloWorldPy /home/plutonh/project/src-gen/HelloWorldPy/build /home/plutonh/project/src-gen/HelloWorldPy/build /home/plutonh/project/src-gen/HelloWorldPy/build/CMakeFiles/LinguaFrancaHelloWorldPy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinguaFrancaHelloWorldPy.dir/depend
