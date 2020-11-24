/*
 * board_factory.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/board_factory.h"
#include "../include/three_by_three_board.h"

std::shared_ptr<board> board_factory::get_board()
{
    return std::shared_ptr<board>{new three_by_three_board{}};
}

