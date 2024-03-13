#include "Maze.h"
#pragma once

class MazeGame {
public:
    MazeGame(){};

    void CreateMaze();
    void CreateMazeFactoryMethod();
    void CreateMazeAbstractFactory();
    void CreateMazeBuilder();
    void CreateMazePrototype();
private:
    Maze* _maze;
};