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
};



#endif /* INCLUDE_BOARD_H_ */
