/*
 * game_application.h
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */

#ifndef INCLUDE_GAME_APPLICATION_H_
#define INCLUDE_GAME_APPLICATION_H_

#include "../include/board_factory.h"
#include "../include/player.h"

#include <memory>

class game_application
{
    public:
        game_application();
        virtual ~game_application() = default;

        std::shared_ptr<board> get_game_board();
        std::shared_ptr<player> initialize_player();
        void play_game(std::shared_ptr<player> player, std::shared_ptr<board> game_board, char marker);

    private:
        static unsigned int player_id;

        std::unique_ptr<board_factory> m_board_factory;
};

#endif /* INCLUDE_GAME_APPLICATION_H_ */
