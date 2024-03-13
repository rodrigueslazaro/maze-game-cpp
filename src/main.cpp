#include "MazeGame.h"
#include "Maze.h"
#include <iostream>
using namespace std;

int main() {
    MazeGame* game = new MazeGame();
    game->CreateMaze();
    cout << "Maze created successfully!" << endl;
    return 0;
}