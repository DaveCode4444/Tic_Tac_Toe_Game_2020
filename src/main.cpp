/*
 * main.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */
#include <iostream>
#include <memory>

#include "../include/board_factory.h"
#include "../include/game_application.h"
#include "../include/three_by_three_board.h"
#include "../include/player.h"

int main()
{
    std::cout << "Ready to Play Tic Tac Toe?" << std::endl;
    std::unique_ptr<game_application> app{new game_application{}};

    //create, get and display board
    std::unique_ptr<board> b = app->get_game_board();
    b->display();
    std::cout << "--------------------------" << std::endl;

    //init player
    std::cout << "Init players" << std::endl;

    std::unique_ptr<player> player1 = app->initialize_player();
    std::unique_ptr<player> player2 = app->initialize_player();
    std::cout << player1->get_name()  << " is playing "<<std::endl;
    std::cout << player2->get_name()  << " is playing "<<std::endl;
    std::cout << "--------------------------" << std::endl;

    return 0;
}


