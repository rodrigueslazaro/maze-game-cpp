#include "Maze.h"
#include "Wall.h"
#include "Door.h"
#include "Room.h"
#pragma once

class MazeFactory {
public:
    virtual Maze* MakeMaze() const {return new Maze;}
    virtual Wall* MakeWall() const {return new Wall;}
    virtual Door* MakeDoor(Room* r1, Room* r2) const {return new Door(r1, r2);}
    virtual Room* MakeRoom(int n) const {return new Room(n);}
};