#include "Room.h"
#include <vector>
#pragma once

class Maze {
public:
    Maze(){};

    void AddRoom(Room* newRoom){rooms.push_back(newRoom);};
    Room* RoomN(int i) {return rooms[i];};
private:
    std::vector<Room*> rooms;
};