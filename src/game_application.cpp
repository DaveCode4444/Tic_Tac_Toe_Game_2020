/*
 * game_application.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/board_factory.h"
#include "../include/game_application.h"
#include "../include/player.h"

#include <iostream>
#include <memory>

game_application::game_application() :
    m_board_factory{new board_factory{}}
{

}

std::unique_ptr<board> game_application::get_game_board()
{
    return m_board_factory->get_board();
}

std::unique_ptr<player> game_application::initialize_player()
{
    std::cout << "Player 1 please Enter you name " << std::endl;
    std::string name;
    std::cin >> name;

    return std::unique_ptr<player>{new player{name}};
}

void game_application::start_game()
{
}

