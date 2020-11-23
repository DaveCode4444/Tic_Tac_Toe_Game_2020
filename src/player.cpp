/*
 * player.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/player.h"

#include <iostream>
#include <string>

player::player(std::string name) :
    m_name{name}
{
}

void player::play(unsigned int , unsigned int)
{
}

std::string player::get_name()
{
    return m_name;
}


