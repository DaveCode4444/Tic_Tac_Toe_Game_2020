/*
 * three_by_three_board.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_THREE_BY_THREE_BOARD_H_
#define INCLUDE_THREE_BY_THREE_BOARD_H_

#include "board.h"

#include<vector>

class three_by_three_board : public board
{
    public:
        three_by_three_board();
        virtual ~three_by_three_board() = default;

        void display() override;

    private:
        std::vector<std::vector<char>> m_board;
};

#endif /* INCLUDE_THREE_BY_THREE_BOARD_H_ */
