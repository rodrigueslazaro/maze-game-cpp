#include "MazeGame.h"
#include "MazeFactory.h"
#include <iostream>
using namespace std;

int main() {
    MazeGame game;
    MazeFactory factory;
    game.CreateMaze(factory);
    cout << "Maze created successfully!" << endl;
    return 0;
}