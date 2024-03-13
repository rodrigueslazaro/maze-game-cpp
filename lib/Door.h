#include "MapSite.h"
#include "Room.h"
#pragma once

class Door : public MapSite {
public:
    Door(Room* nr1 = 0, Room* nr2 = 0){_room1 = nr1; _room2= nr2;};

    virtual void Enter(){};
    Room* OtherSideFrom(Room*);

private:
    Room* _room1;
    Room* _room2;
    bool _isOpen();
};