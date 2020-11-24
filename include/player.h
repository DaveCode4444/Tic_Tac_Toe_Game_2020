/*
 * player.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_PLAYER_H_
#define INCLUDE_PLAYER_H_

#include "../include/board.h"

#include <string>
#include <memory>

class player
{
    public:
        explicit player(std::string name);
        virtual ~player() = default;

        bool play(unsigned int x_coordinate,
                  unsigned int y_coordinate,
                  std::shared_ptr<board> game_board,
                  char marker);
        std::string get_name();

    private:
        std::string m_name;
};

#endif /* INCLUDE_PLAYER_H_ */
