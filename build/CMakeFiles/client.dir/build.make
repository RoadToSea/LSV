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
CMAKE_SOURCE_DIR = /home/oliver/cpp_projects/LSV

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/oliver/cpp_projects/LSV/build

# Include any dependencies generated for this target.
include CMakeFiles/client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/client.dir/flags.make

CMakeFiles/client.dir/client/clientBase.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/clientBase.cpp.o: ../client/clientBase.cpp
CMakeFiles/client.dir/client/clientBase.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/client.dir/client/clientBase.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/client/clientBase.cpp.o -MF CMakeFiles/client.dir/client/clientBase.cpp.o.d -o CMakeFiles/client.dir/client/clientBase.cpp.o -c /home/oliver/cpp_projects/LSV/client/clientBase.cpp

CMakeFiles/client.dir/client/clientBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/clientBase.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/client/clientBase.cpp > CMakeFiles/client.dir/client/clientBase.cpp.i

CMakeFiles/client.dir/client/clientBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/clientBase.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/client/clientBase.cpp -o CMakeFiles/client.dir/client/clientBase.cpp.s

CMakeFiles/client.dir/client/main.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/client/main.cpp.o: ../client/main.cpp
CMakeFiles/client.dir/client/main.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/client.dir/client/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/client/main.cpp.o -MF CMakeFiles/client.dir/client/main.cpp.o.d -o CMakeFiles/client.dir/client/main.cpp.o -c /home/oliver/cpp_projects/LSV/client/main.cpp

CMakeFiles/client.dir/client/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/client/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/client/main.cpp > CMakeFiles/client.dir/client/main.cpp.i

CMakeFiles/client.dir/client/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/client/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/client/main.cpp -o CMakeFiles/client.dir/client/main.cpp.s

CMakeFiles/client.dir/utility/Acceptor.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Acceptor.cpp.o: ../utility/Acceptor.cpp
CMakeFiles/client.dir/utility/Acceptor.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/client.dir/utility/Acceptor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Acceptor.cpp.o -MF CMakeFiles/client.dir/utility/Acceptor.cpp.o.d -o CMakeFiles/client.dir/utility/Acceptor.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Acceptor.cpp

CMakeFiles/client.dir/utility/Acceptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Acceptor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Acceptor.cpp > CMakeFiles/client.dir/utility/Acceptor.cpp.i

CMakeFiles/client.dir/utility/Acceptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Acceptor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Acceptor.cpp -o CMakeFiles/client.dir/utility/Acceptor.cpp.s

CMakeFiles/client.dir/utility/Channel.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Channel.cpp.o: ../utility/Channel.cpp
CMakeFiles/client.dir/utility/Channel.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/client.dir/utility/Channel.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Channel.cpp.o -MF CMakeFiles/client.dir/utility/Channel.cpp.o.d -o CMakeFiles/client.dir/utility/Channel.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Channel.cpp

CMakeFiles/client.dir/utility/Channel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Channel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Channel.cpp > CMakeFiles/client.dir/utility/Channel.cpp.i

CMakeFiles/client.dir/utility/Channel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Channel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Channel.cpp -o CMakeFiles/client.dir/utility/Channel.cpp.s

CMakeFiles/client.dir/utility/Connection.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Connection.cpp.o: ../utility/Connection.cpp
CMakeFiles/client.dir/utility/Connection.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/client.dir/utility/Connection.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Connection.cpp.o -MF CMakeFiles/client.dir/utility/Connection.cpp.o.d -o CMakeFiles/client.dir/utility/Connection.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Connection.cpp

CMakeFiles/client.dir/utility/Connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Connection.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Connection.cpp > CMakeFiles/client.dir/utility/Connection.cpp.i

CMakeFiles/client.dir/utility/Connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Connection.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Connection.cpp -o CMakeFiles/client.dir/utility/Connection.cpp.s

CMakeFiles/client.dir/utility/Epoll.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Epoll.cpp.o: ../utility/Epoll.cpp
CMakeFiles/client.dir/utility/Epoll.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/client.dir/utility/Epoll.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Epoll.cpp.o -MF CMakeFiles/client.dir/utility/Epoll.cpp.o.d -o CMakeFiles/client.dir/utility/Epoll.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Epoll.cpp

CMakeFiles/client.dir/utility/Epoll.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Epoll.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Epoll.cpp > CMakeFiles/client.dir/utility/Epoll.cpp.i

CMakeFiles/client.dir/utility/Epoll.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Epoll.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Epoll.cpp -o CMakeFiles/client.dir/utility/Epoll.cpp.s

CMakeFiles/client.dir/utility/EventLoop.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/EventLoop.cpp.o: ../utility/EventLoop.cpp
CMakeFiles/client.dir/utility/EventLoop.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/client.dir/utility/EventLoop.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/EventLoop.cpp.o -MF CMakeFiles/client.dir/utility/EventLoop.cpp.o.d -o CMakeFiles/client.dir/utility/EventLoop.cpp.o -c /home/oliver/cpp_projects/LSV/utility/EventLoop.cpp

CMakeFiles/client.dir/utility/EventLoop.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/EventLoop.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/EventLoop.cpp > CMakeFiles/client.dir/utility/EventLoop.cpp.i

CMakeFiles/client.dir/utility/EventLoop.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/EventLoop.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/EventLoop.cpp -o CMakeFiles/client.dir/utility/EventLoop.cpp.s

CMakeFiles/client.dir/utility/Log.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Log.cpp.o: ../utility/Log.cpp
CMakeFiles/client.dir/utility/Log.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/client.dir/utility/Log.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Log.cpp.o -MF CMakeFiles/client.dir/utility/Log.cpp.o.d -o CMakeFiles/client.dir/utility/Log.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Log.cpp

CMakeFiles/client.dir/utility/Log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Log.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Log.cpp > CMakeFiles/client.dir/utility/Log.cpp.i

CMakeFiles/client.dir/utility/Log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Log.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Log.cpp -o CMakeFiles/client.dir/utility/Log.cpp.s

CMakeFiles/client.dir/utility/Socket.cpp.o: CMakeFiles/client.dir/flags.make
CMakeFiles/client.dir/utility/Socket.cpp.o: ../utility/Socket.cpp
CMakeFiles/client.dir/utility/Socket.cpp.o: CMakeFiles/client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/client.dir/utility/Socket.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/client.dir/utility/Socket.cpp.o -MF CMakeFiles/client.dir/utility/Socket.cpp.o.d -o CMakeFiles/client.dir/utility/Socket.cpp.o -c /home/oliver/cpp_projects/LSV/utility/Socket.cpp

CMakeFiles/client.dir/utility/Socket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/client.dir/utility/Socket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/oliver/cpp_projects/LSV/utility/Socket.cpp > CMakeFiles/client.dir/utility/Socket.cpp.i

CMakeFiles/client.dir/utility/Socket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/client.dir/utility/Socket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/oliver/cpp_projects/LSV/utility/Socket.cpp -o CMakeFiles/client.dir/utility/Socket.cpp.s

# Object files for target client
client_OBJECTS = \
"CMakeFiles/client.dir/client/clientBase.cpp.o" \
"CMakeFiles/client.dir/client/main.cpp.o" \
"CMakeFiles/client.dir/utility/Acceptor.cpp.o" \
"CMakeFiles/client.dir/utility/Channel.cpp.o" \
"CMakeFiles/client.dir/utility/Connection.cpp.o" \
"CMakeFiles/client.dir/utility/Epoll.cpp.o" \
"CMakeFiles/client.dir/utility/EventLoop.cpp.o" \
"CMakeFiles/client.dir/utility/Log.cpp.o" \
"CMakeFiles/client.dir/utility/Socket.cpp.o"

# External object files for target client
client_EXTERNAL_OBJECTS =

client: CMakeFiles/client.dir/client/clientBase.cpp.o
client: CMakeFiles/client.dir/client/main.cpp.o
client: CMakeFiles/client.dir/utility/Acceptor.cpp.o
client: CMakeFiles/client.dir/utility/Channel.cpp.o
client: CMakeFiles/client.dir/utility/Connection.cpp.o
client: CMakeFiles/client.dir/utility/Epoll.cpp.o
client: CMakeFiles/client.dir/utility/EventLoop.cpp.o
client: CMakeFiles/client.dir/utility/Log.cpp.o
client: CMakeFiles/client.dir/utility/Socket.cpp.o
client: CMakeFiles/client.dir/build.make
client: CMakeFiles/client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/oliver/cpp_projects/LSV/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/client.dir/build: client
.PHONY : CMakeFiles/client.dir/build

CMakeFiles/client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/client.dir/clean

CMakeFiles/client.dir/depend:
	cd /home/oliver/cpp_projects/LSV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/oliver/cpp_projects/LSV /home/oliver/cpp_projects/LSV /home/oliver/cpp_projects/LSV/build /home/oliver/cpp_projects/LSV/build /home/oliver/cpp_projects/LSV/build/CMakeFiles/client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/client.dir/depend

