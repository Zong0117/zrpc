# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zong/projects/zrpc

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zong/projects/zrpc/build

# Include any dependencies generated for this target.
include src/CMakeFiles/zrpc.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/zrpc.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/zrpc.dir/flags.make

src/CMakeFiles/zrpc.dir/package.pb.cc.o: src/CMakeFiles/zrpc.dir/flags.make
src/CMakeFiles/zrpc.dir/package.pb.cc.o: ../src/package.pb.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zong/projects/zrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/zrpc.dir/package.pb.cc.o"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zrpc.dir/package.pb.cc.o -c /home/zong/projects/zrpc/src/package.pb.cc

src/CMakeFiles/zrpc.dir/package.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zrpc.dir/package.pb.cc.i"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zong/projects/zrpc/src/package.pb.cc > CMakeFiles/zrpc.dir/package.pb.cc.i

src/CMakeFiles/zrpc.dir/package.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zrpc.dir/package.pb.cc.s"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zong/projects/zrpc/src/package.pb.cc -o CMakeFiles/zrpc.dir/package.pb.cc.s

src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.o: src/CMakeFiles/zrpc.dir/flags.make
src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.o: ../src/zrpcapplication.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zong/projects/zrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.o"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zrpc.dir/zrpcapplication.cpp.o -c /home/zong/projects/zrpc/src/zrpcapplication.cpp

src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zrpc.dir/zrpcapplication.cpp.i"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zong/projects/zrpc/src/zrpcapplication.cpp > CMakeFiles/zrpc.dir/zrpcapplication.cpp.i

src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zrpc.dir/zrpcapplication.cpp.s"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zong/projects/zrpc/src/zrpcapplication.cpp -o CMakeFiles/zrpc.dir/zrpcapplication.cpp.s

src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.o: src/CMakeFiles/zrpc.dir/flags.make
src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.o: ../src/zrpcconfig.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zong/projects/zrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.o"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zrpc.dir/zrpcconfig.cpp.o -c /home/zong/projects/zrpc/src/zrpcconfig.cpp

src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zrpc.dir/zrpcconfig.cpp.i"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zong/projects/zrpc/src/zrpcconfig.cpp > CMakeFiles/zrpc.dir/zrpcconfig.cpp.i

src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zrpc.dir/zrpcconfig.cpp.s"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zong/projects/zrpc/src/zrpcconfig.cpp -o CMakeFiles/zrpc.dir/zrpcconfig.cpp.s

src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.o: src/CMakeFiles/zrpc.dir/flags.make
src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.o: ../src/zrpcprovider.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zong/projects/zrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.o"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/zrpc.dir/zrpcprovider.cpp.o -c /home/zong/projects/zrpc/src/zrpcprovider.cpp

src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zrpc.dir/zrpcprovider.cpp.i"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zong/projects/zrpc/src/zrpcprovider.cpp > CMakeFiles/zrpc.dir/zrpcprovider.cpp.i

src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zrpc.dir/zrpcprovider.cpp.s"
	cd /home/zong/projects/zrpc/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zong/projects/zrpc/src/zrpcprovider.cpp -o CMakeFiles/zrpc.dir/zrpcprovider.cpp.s

# Object files for target zrpc
zrpc_OBJECTS = \
"CMakeFiles/zrpc.dir/package.pb.cc.o" \
"CMakeFiles/zrpc.dir/zrpcapplication.cpp.o" \
"CMakeFiles/zrpc.dir/zrpcconfig.cpp.o" \
"CMakeFiles/zrpc.dir/zrpcprovider.cpp.o"

# External object files for target zrpc
zrpc_EXTERNAL_OBJECTS =

../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/package.pb.cc.o
../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/zrpcapplication.cpp.o
../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/zrpcconfig.cpp.o
../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/zrpcprovider.cpp.o
../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/build.make
../lib/libzrpc.a: src/CMakeFiles/zrpc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zong/projects/zrpc/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../lib/libzrpc.a"
	cd /home/zong/projects/zrpc/build/src && $(CMAKE_COMMAND) -P CMakeFiles/zrpc.dir/cmake_clean_target.cmake
	cd /home/zong/projects/zrpc/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/zrpc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/zrpc.dir/build: ../lib/libzrpc.a

.PHONY : src/CMakeFiles/zrpc.dir/build

src/CMakeFiles/zrpc.dir/clean:
	cd /home/zong/projects/zrpc/build/src && $(CMAKE_COMMAND) -P CMakeFiles/zrpc.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/zrpc.dir/clean

src/CMakeFiles/zrpc.dir/depend:
	cd /home/zong/projects/zrpc/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zong/projects/zrpc /home/zong/projects/zrpc/src /home/zong/projects/zrpc/build /home/zong/projects/zrpc/build/src /home/zong/projects/zrpc/build/src/CMakeFiles/zrpc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/zrpc.dir/depend

