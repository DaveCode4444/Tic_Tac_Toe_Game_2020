/*
 * player.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/player.h"

#include <iostream>
#include <memory>
#include <string>

player::player(std::string name) :
    m_name{name}
{
}

bool player::play(unsigned int x_coordinate,
                  unsigned int y_coordinate,
                  std::shared_ptr<board> game_board,
                  char marker)
{
    if (x_coordinate < 0 || x_coordinate > 2 || y_coordinate < 0 || y_coordinate > 2)
    {
        std::cout << "Invalid coordinates entered : Please enter valid coordinates" << std::endl;
        return false;
    }
    return game_board->place_marker_on_board(x_coordinate, y_coordinate, marker);
}

std::string player::get_name()
{
    return m_name;
}


