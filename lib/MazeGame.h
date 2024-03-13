#include "Maze.h"
#include "MazeBuilder.h"
#pragma once

class MazeGame {
public:
    MazeGame(){};

    void CreateMaze(MazeBuilder& factory);
private:
    Maze* _maze;
};