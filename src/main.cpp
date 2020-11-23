/*
 * main.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */
#include <iostream>
#include <memory>

#include "../include/board.h"
#include "../include/three_by_three_board.h"

int main()
{
    std::cout << "Ready to Play Tic Tac Toe?" << std::endl;

    std::unique_ptr<board> b{new three_by_three_board()};

    b->display();

    return 0;
}


