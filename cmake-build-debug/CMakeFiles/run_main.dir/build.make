# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/itay/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/itay/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/itay/CLionProjects/Riversi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/itay/CLionProjects/Riversi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/run_main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run_main.dir/flags.make

CMakeFiles/run_main.dir/src/Board.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run_main.dir/src/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Board.cpp.o -c /home/itay/CLionProjects/Riversi/src/Board.cpp

CMakeFiles/run_main.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Board.cpp > CMakeFiles/run_main.dir/src/Board.cpp.i

CMakeFiles/run_main.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Board.cpp -o CMakeFiles/run_main.dir/src/Board.cpp.s

CMakeFiles/run_main.dir/src/Board.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Board.cpp.o.requires

CMakeFiles/run_main.dir/src/Board.cpp.o.provides: CMakeFiles/run_main.dir/src/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Board.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Board.cpp.o.provides

CMakeFiles/run_main.dir/src/Board.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Board.cpp.o


CMakeFiles/run_main.dir/src/Game.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run_main.dir/src/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Game.cpp.o -c /home/itay/CLionProjects/Riversi/src/Game.cpp

CMakeFiles/run_main.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Game.cpp > CMakeFiles/run_main.dir/src/Game.cpp.i

CMakeFiles/run_main.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Game.cpp -o CMakeFiles/run_main.dir/src/Game.cpp.s

CMakeFiles/run_main.dir/src/Game.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Game.cpp.o.requires

CMakeFiles/run_main.dir/src/Game.cpp.o.provides: CMakeFiles/run_main.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Game.cpp.o.provides

CMakeFiles/run_main.dir/src/Game.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Game.cpp.o


CMakeFiles/run_main.dir/src/Player.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/run_main.dir/src/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Player.cpp.o -c /home/itay/CLionProjects/Riversi/src/Player.cpp

CMakeFiles/run_main.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Player.cpp > CMakeFiles/run_main.dir/src/Player.cpp.i

CMakeFiles/run_main.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Player.cpp -o CMakeFiles/run_main.dir/src/Player.cpp.s

CMakeFiles/run_main.dir/src/Player.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Player.cpp.o.requires

CMakeFiles/run_main.dir/src/Player.cpp.o.provides: CMakeFiles/run_main.dir/src/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Player.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Player.cpp.o.provides

CMakeFiles/run_main.dir/src/Player.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Player.cpp.o


CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o: ../src/HumanPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o -c /home/itay/CLionProjects/Riversi/src/HumanPlayer.cpp

CMakeFiles/run_main.dir/src/HumanPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/HumanPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/HumanPlayer.cpp > CMakeFiles/run_main.dir/src/HumanPlayer.cpp.i

CMakeFiles/run_main.dir/src/HumanPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/HumanPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/HumanPlayer.cpp -o CMakeFiles/run_main.dir/src/HumanPlayer.cpp.s

CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.requires

CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.provides: CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.provides

CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.provides.build: CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o


CMakeFiles/run_main.dir/src/Point.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/run_main.dir/src/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Point.cpp.o -c /home/itay/CLionProjects/Riversi/src/Point.cpp

CMakeFiles/run_main.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Point.cpp > CMakeFiles/run_main.dir/src/Point.cpp.i

CMakeFiles/run_main.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Point.cpp -o CMakeFiles/run_main.dir/src/Point.cpp.s

CMakeFiles/run_main.dir/src/Point.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Point.cpp.o.requires

CMakeFiles/run_main.dir/src/Point.cpp.o.provides: CMakeFiles/run_main.dir/src/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Point.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Point.cpp.o.provides

CMakeFiles/run_main.dir/src/Point.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Point.cpp.o


CMakeFiles/run_main.dir/src/Path.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Path.cpp.o: ../src/Path.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/run_main.dir/src/Path.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Path.cpp.o -c /home/itay/CLionProjects/Riversi/src/Path.cpp

CMakeFiles/run_main.dir/src/Path.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Path.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Path.cpp > CMakeFiles/run_main.dir/src/Path.cpp.i

CMakeFiles/run_main.dir/src/Path.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Path.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Path.cpp -o CMakeFiles/run_main.dir/src/Path.cpp.s

CMakeFiles/run_main.dir/src/Path.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Path.cpp.o.requires

CMakeFiles/run_main.dir/src/Path.cpp.o.provides: CMakeFiles/run_main.dir/src/Path.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Path.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Path.cpp.o.provides

CMakeFiles/run_main.dir/src/Path.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Path.cpp.o


CMakeFiles/run_main.dir/src/ComPlayer.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/ComPlayer.cpp.o: ../src/ComPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/run_main.dir/src/ComPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/ComPlayer.cpp.o -c /home/itay/CLionProjects/Riversi/src/ComPlayer.cpp

CMakeFiles/run_main.dir/src/ComPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/ComPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/ComPlayer.cpp > CMakeFiles/run_main.dir/src/ComPlayer.cpp.i

CMakeFiles/run_main.dir/src/ComPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/ComPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/ComPlayer.cpp -o CMakeFiles/run_main.dir/src/ComPlayer.cpp.s

CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.requires

CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.provides: CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.provides

CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.provides.build: CMakeFiles/run_main.dir/src/ComPlayer.cpp.o


CMakeFiles/run_main.dir/src/Logic.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Logic.cpp.o: ../src/Logic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/run_main.dir/src/Logic.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Logic.cpp.o -c /home/itay/CLionProjects/Riversi/src/Logic.cpp

CMakeFiles/run_main.dir/src/Logic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Logic.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Logic.cpp > CMakeFiles/run_main.dir/src/Logic.cpp.i

CMakeFiles/run_main.dir/src/Logic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Logic.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Logic.cpp -o CMakeFiles/run_main.dir/src/Logic.cpp.s

CMakeFiles/run_main.dir/src/Logic.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Logic.cpp.o.requires

CMakeFiles/run_main.dir/src/Logic.cpp.o.provides: CMakeFiles/run_main.dir/src/Logic.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Logic.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Logic.cpp.o.provides

CMakeFiles/run_main.dir/src/Logic.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Logic.cpp.o


CMakeFiles/run_main.dir/src/Client.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/Client.cpp.o: ../src/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/run_main.dir/src/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/Client.cpp.o -c /home/itay/CLionProjects/Riversi/src/Client.cpp

CMakeFiles/run_main.dir/src/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/Client.cpp > CMakeFiles/run_main.dir/src/Client.cpp.i

CMakeFiles/run_main.dir/src/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/Client.cpp -o CMakeFiles/run_main.dir/src/Client.cpp.s

CMakeFiles/run_main.dir/src/Client.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/Client.cpp.o.requires

CMakeFiles/run_main.dir/src/Client.cpp.o.provides: CMakeFiles/run_main.dir/src/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/Client.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/Client.cpp.o.provides

CMakeFiles/run_main.dir/src/Client.cpp.o.provides.build: CMakeFiles/run_main.dir/src/Client.cpp.o


CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o: ../src/LocalPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o -c /home/itay/CLionProjects/Riversi/src/LocalPlayer.cpp

CMakeFiles/run_main.dir/src/LocalPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/LocalPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/LocalPlayer.cpp > CMakeFiles/run_main.dir/src/LocalPlayer.cpp.i

CMakeFiles/run_main.dir/src/LocalPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/LocalPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/LocalPlayer.cpp -o CMakeFiles/run_main.dir/src/LocalPlayer.cpp.s

CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.requires

CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.provides: CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.provides

CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.provides.build: CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o


CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o: ../src/RemotePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o -c /home/itay/CLionProjects/Riversi/src/RemotePlayer.cpp

CMakeFiles/run_main.dir/src/RemotePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/RemotePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/RemotePlayer.cpp > CMakeFiles/run_main.dir/src/RemotePlayer.cpp.i

CMakeFiles/run_main.dir/src/RemotePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/RemotePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/RemotePlayer.cpp -o CMakeFiles/run_main.dir/src/RemotePlayer.cpp.s

CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.requires

CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.provides: CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.provides

CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.provides.build: CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o


CMakeFiles/run_main.dir/src/main.cpp.o: CMakeFiles/run_main.dir/flags.make
CMakeFiles/run_main.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/run_main.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run_main.dir/src/main.cpp.o -c /home/itay/CLionProjects/Riversi/src/main.cpp

CMakeFiles/run_main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run_main.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/itay/CLionProjects/Riversi/src/main.cpp > CMakeFiles/run_main.dir/src/main.cpp.i

CMakeFiles/run_main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run_main.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/itay/CLionProjects/Riversi/src/main.cpp -o CMakeFiles/run_main.dir/src/main.cpp.s

CMakeFiles/run_main.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/run_main.dir/src/main.cpp.o.requires

CMakeFiles/run_main.dir/src/main.cpp.o.provides: CMakeFiles/run_main.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/run_main.dir/build.make CMakeFiles/run_main.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/run_main.dir/src/main.cpp.o.provides

CMakeFiles/run_main.dir/src/main.cpp.o.provides.build: CMakeFiles/run_main.dir/src/main.cpp.o


# Object files for target run_main
run_main_OBJECTS = \
"CMakeFiles/run_main.dir/src/Board.cpp.o" \
"CMakeFiles/run_main.dir/src/Game.cpp.o" \
"CMakeFiles/run_main.dir/src/Player.cpp.o" \
"CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o" \
"CMakeFiles/run_main.dir/src/Point.cpp.o" \
"CMakeFiles/run_main.dir/src/Path.cpp.o" \
"CMakeFiles/run_main.dir/src/ComPlayer.cpp.o" \
"CMakeFiles/run_main.dir/src/Logic.cpp.o" \
"CMakeFiles/run_main.dir/src/Client.cpp.o" \
"CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o" \
"CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o" \
"CMakeFiles/run_main.dir/src/main.cpp.o"

# External object files for target run_main
run_main_EXTERNAL_OBJECTS =

run_main: CMakeFiles/run_main.dir/src/Board.cpp.o
run_main: CMakeFiles/run_main.dir/src/Game.cpp.o
run_main: CMakeFiles/run_main.dir/src/Player.cpp.o
run_main: CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o
run_main: CMakeFiles/run_main.dir/src/Point.cpp.o
run_main: CMakeFiles/run_main.dir/src/Path.cpp.o
run_main: CMakeFiles/run_main.dir/src/ComPlayer.cpp.o
run_main: CMakeFiles/run_main.dir/src/Logic.cpp.o
run_main: CMakeFiles/run_main.dir/src/Client.cpp.o
run_main: CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o
run_main: CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o
run_main: CMakeFiles/run_main.dir/src/main.cpp.o
run_main: CMakeFiles/run_main.dir/build.make
run_main: CMakeFiles/run_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable run_main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run_main.dir/build: run_main

.PHONY : CMakeFiles/run_main.dir/build

CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Board.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Game.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Player.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/HumanPlayer.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Point.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Path.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/ComPlayer.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Logic.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/Client.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/LocalPlayer.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/RemotePlayer.cpp.o.requires
CMakeFiles/run_main.dir/requires: CMakeFiles/run_main.dir/src/main.cpp.o.requires

.PHONY : CMakeFiles/run_main.dir/requires

CMakeFiles/run_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_main.dir/clean

CMakeFiles/run_main.dir/depend:
	cd /home/itay/CLionProjects/Riversi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/itay/CLionProjects/Riversi /home/itay/CLionProjects/Riversi /home/itay/CLionProjects/Riversi/cmake-build-debug /home/itay/CLionProjects/Riversi/cmake-build-debug /home/itay/CLionProjects/Riversi/cmake-build-debug/CMakeFiles/run_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run_main.dir/depend

