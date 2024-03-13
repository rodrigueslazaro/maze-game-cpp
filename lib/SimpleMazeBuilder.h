#include "MazeBuilder.h"
#include "Wall.h"
#include "Door.h"
#include "Maze.h"
#pragma once
#include <iostream>


class SimpleMazeBuilder : public MazeBuilder {
public:
    SimpleMazeBuilder(){_currentMaze = 0;}

    virtual void BuildMaze(){_currentMaze = new Maze;}
    virtual void BuildRoom(int n){
        if (!_currentMaze->RoomN(n)) {
            std::cout << "Maze created successfully!" << std::endl;
            Room* room = new Room(n);
            _currentMaze->AddRoom(room);

            room->SetSide(North, new Wall);
            room->SetSide(East, new Wall);
            room->SetSide(South, new Wall);
            room->SetSide(West, new Wall);
        }
    };
    virtual void BuildDoor(int n1, int n2) {
        Room* r1 = _currentMaze->RoomN(n1);
        Room* r2 = _currentMaze->RoomN(n2);
        Door* d = new Door(r1, r2);

        r1->SetSide(CommonWall(r1,r2), d);
        r2->SetSide(CommonWall(r2,r1), d);
    };

    virtual Maze* GetMaze(){return _currentMaze;}
private:
    Direction CommonWall(Room* r1, Room* r2) {
        return South;
    };
    Maze* _currentMaze;
};