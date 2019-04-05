#include <iostream>
#include "maze_game.hpp"
#include "EnchantedMazeFactory.hpp"
#include "DystopianMazeFactory.hpp"

int main() {
    maze_game g;
    EnchantedMazeFactory emf;
    Maze *em = g.create_maze(emf);
    em->print();

    std::cout << "\n\n" << endl;

    DystopianMazeFactory dmf;
    Maze *dm = g.create_maze(dmf);
    dm->print();

    return 0;
}