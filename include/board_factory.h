/*
 * board_factory.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_BOARD_FACTORY_H_
#define INCLUDE_BOARD_FACTORY_H_

#include "board.h"

#include <memory>

class board_factory
{
    public:
        board_factory();
        virtual ~board_factory() = default;

        std::unique_ptr<board> get_board();
};

#endif /* INCLUDE_BOARD_FACTORY_H_ */
