#include "Maze.h"
#pragma once

class MazeGame {
public:
    MazeGame(){};

    void CreateMaze(MazeFactory& factory);
private:
    Maze* _maze;
};