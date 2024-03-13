#include "MapSite.h"
#pragma once

enum Direction {North, South, East, West};

class Room : public MapSite {
public:
    Room(int roomN){_roomNumber = roomN;};

    MapSite* GetSide(Direction) const;
    void SetSide(Direction newD, MapSite* newSite){_sides[newD] = newSite;};

    virtual void Enter(){};
private:
    MapSite* _sides[4];
    int _roomNumber;
};