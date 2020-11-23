/*
 * main.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */
#include <iostream>
#include <memory>

#include "../include/board_factory.h"
#include "../include/three_by_three_board.h"

int main()
{
    std::cout << "Ready to Play Tic Tac Toe?" << std::endl;

    std::unique_ptr<board_factory> b_factory{new board_factory{}};
    std::unique_ptr<board> b = b_factory->get_board();

    b->display();

    return 0;
}


