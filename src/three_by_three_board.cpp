/*
 * three_by_three_board.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/three_by_three_board.h"

#include <iostream>

three_by_three_board::three_by_three_board() :
    m_board{{'-', '-', '-'},
            {'-', '-', '-'},
            {'-', '-', '-'}}
{
}

void three_by_three_board::display()
{
    std::cout << "|C|0|1|2|" << std::endl;
    for (unsigned int i = 0 ; i < m_board.size(); ++i)
    {
        std::cout << "|" << i ;
        for (unsigned int j = 0; j < m_board.at(i).size(); ++j)
        {
            std::cout << "|" << m_board.at(i).at(j);
        }
        std::cout << "|" << "\n";
    }
}

bool three_by_three_board::place_marker_on_board(unsigned int x_coordinate, unsigned int y_coordinate, char marker)
{
    if (m_board.at(x_coordinate).at(y_coordinate) != '-')
    {
        std::cout << "This pair of coordinates is already used : Please enter other coordinates" << std::endl;
        return false;
    }

    m_board.at(x_coordinate).at(y_coordinate) = marker;
    return true;
}

bool three_by_three_board::player_won(char marker)
{
    if (check_rows(marker)) return true;

    if (check_columns(marker)) return true;

    if (check_diagonals(marker)) return true;

    return false;
}

bool three_by_three_board::check_rows(char marker)
{
    if(((m_board.at(0).at(0) == marker) && (m_board.at(0).at(1) == marker) && (m_board.at(0).at(2) == marker)) ||
      ((m_board.at(1).at(0) == marker) && (m_board.at(1).at(1) == marker) && (m_board.at(1).at(2) == marker)) ||
      ((m_board.at(2).at(0) == marker) && (m_board.at(2).at(1) == marker) && (m_board.at(2).at(2) == marker)))
    {
        return true;
    }

    return false;
}

bool three_by_three_board::check_columns(char marker)
{
    if(((m_board.at(0).at(0) == marker) && (m_board.at(1).at(0) == marker) && (m_board.at(2).at(0) == marker)) ||
      ((m_board.at(0).at(1) == marker) && (m_board.at(1).at(1) == marker) && (m_board.at(2).at(1) == marker)) ||
      ((m_board.at(0).at(2) == marker) && (m_board.at(1).at(2) == marker) && (m_board.at(2).at(2) == marker)))
    {
        return true;
    }

    return false;
}

bool three_by_three_board::check_diagonals(char marker)
{
    if(((m_board.at(0).at(0) == marker) && (m_board.at(1).at(1) == marker) && (m_board.at(2).at(2) == marker)) ||
      ((m_board.at(0).at(2) == marker) && (m_board.at(1).at(1) == marker) && (m_board.at(2).at(0) == marker)))
    {
        return true;
    }

    return false;
}


