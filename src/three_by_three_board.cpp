/*
 * three_by_three_board.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#include "../include/three_by_three_board.h"

#include <iostream>

three_by_three_board::three_by_three_board() :
    m_board{{'T', 'I', 'C'},
            {'T', 'A', 'C'},
            {'T', 'O', 'E'}}
{
}

void three_by_three_board::display()
{
    std::cout << "three_by_three_board::displaying board" <<std::endl;

    for (unsigned int i = 0 ; i < m_board.size(); ++i)
    {
        for (unsigned int j = 0; j < m_board.at(i).size(); ++j)
        {
            std::cout << "|" << m_board.at(i).at(j);
        }
        std::cout << "|" << "\n";
    }
}



