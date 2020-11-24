/*
 * board.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_BOARD_H_
#define INCLUDE_BOARD_H_

class board
{
public:
    virtual ~board() = default;

    virtual void display() = 0;
    virtual bool place_marker_on_board(unsigned int x_coordinate, unsigned int y_coordinate, char marker) = 0;
    virtual bool player_won(char marker) = 0;
};

#endif /* INCLUDE_BOARD_H_ */
