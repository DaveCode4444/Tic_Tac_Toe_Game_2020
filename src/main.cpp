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
#include "../include/player.h"

int main()
{
    std::cout << "Ready to Play Tic Tac Toe?" << std::endl;

    std::unique_ptr<board_factory> b_factory{new board_factory{}};
    std::unique_ptr<board> b = b_factory->get_board();

    b->display();

    std::cout << "--------------------------" << std::endl;
    std::cout << "Starting Two Player Tic Tac Toe Game" << std::endl;

    std::cout << "Player 1 please Enter you name " << std::endl;
    std::string p1_name;
    std::cin >> p1_name;
    std::unique_ptr<player> player1{new player{p1_name}};


    std::cout << "Player 2 please Enter you name " << std::endl;
    std::string p2_name;
    std::cin >> p2_name;
    std::unique_ptr<player> player2{new player{p2_name}};

    std::cout << p1_name  << " is playing "<<std::endl;
    std::cout << p2_name  << " is playing "<<std::endl;
    std::cout << "--------------------------" << std::endl;

    return 0;
}


