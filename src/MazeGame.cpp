#include "MazeGame.h"
#include "MazeBuilder.h"

void MazeGame::CreateMaze(MazeBuilder& builder) {
    builder.BuildMaze();
    
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1,2);

    _maze = builder.GetMaze();
}