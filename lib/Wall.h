#include "MapSite.h"
#pragma once

class Wall : public MapSite {
public:
    Wall(){};

    virtual void Enter(){};
};