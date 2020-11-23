/*
 * player.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_PLAYER_H_
#define INCLUDE_PLAYER_H_

#include <string>

class player
{
    public:
        explicit player(std::string name);
        virtual ~player() = default;

        void play(unsigned int x_coordinate, unsigned int y_coordinate);

    private:
        std::string m_name;
};

#endif /* INCLUDE_PLAYER_H_ */
