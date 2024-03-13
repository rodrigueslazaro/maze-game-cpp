#include "MazeGame.h"
#include "SimpleMazeBuilder.h"
#include <iostream>
using namespace std;

int main() {
    MazeGame game;
    SimpleMazeBuilder builder;
    game.CreateMaze(builder);
    cout << "Maze created successfully!" << endl;
    return 0;
}