cmake_minimum_required(VERSION 3.13)
project(Lab009)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")

add_executable(Lab009 main.cpp Door.cpp Door.hpp Wall.cpp Wall.hpp Room.cpp Room.hpp Maze.cpp Maze.hpp MazeFactory.cpp MazeFactory.hpp EnchantedMazeFactory.cpp EnchantedMazeFactory.hpp DystopianMazeFactory.cpp DystopianMazeFactory.hpp maze_game.cpp maze_game.hpp EnchantedDoor.cpp EnchantedDoor.hpp EnchantedWall.cpp EnchantedWall.hpp EnchantedMaze.cpp EnchantedMaze.hpp DystopianRoom.cpp DystopianRoom.hpp DystopianDoor.cpp DystopianDoor.hpp EnchantedRoom.cpp EnchantedRoom.hpp DystopianMaze.cpp DystopianMaze.hpp DystopianWall.cpp DystopianWall.hpp)