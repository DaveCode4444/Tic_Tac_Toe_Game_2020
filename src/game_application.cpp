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

unsigned int game_application::player_id{1};

game_application::game_application() :
    m_board_factory{new board_factory{}}
{
}

std::shared_ptr<board> game_application::get_game_board()
{
    return m_board_factory->get_board();
}

std::shared_ptr<player> game_application::initialize_player()
{
    std::cout << "Player " << player_id++  << " please enter your name : " ;
    std::string name;
    std::cin >> name;

    return std::unique_ptr<player>{new player{name}};
}

void game_application::play_game(std::shared_ptr<player> player, std::shared_ptr<board> game_board, char marker)
{
    bool valid_input_entered_by_player = false;
    while (!valid_input_entered_by_player)
    {
        std::string player_name = player->get_name();
        std::cout << player_name  << " enter x coordinate at which to place your marker : ";
        unsigned int x_coordinate;
        std::cin >> x_coordinate;

        std::cout << player_name  << " enter y coordinate at which to place your marker: ";
        unsigned int y_coordinate;
        std::cin >> y_coordinate;

        std::cout << x_coordinate << ", " << y_coordinate << " entered by "<< player_name << std::endl;

        valid_input_entered_by_player = player->play(x_coordinate, y_coordinate, game_board, marker);
    }
}

