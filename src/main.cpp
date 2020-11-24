/*
 * main.cpp
 *
 *  Created on: Nov 23, 2020
 *      Author: Devang Sawant
 */
#include <iostream>
#include <memory>

#include "../include/board_factory.h"
#include "../include/game_application.h"
#include "../include/three_by_three_board.h"
#include "../include/player.h"

unsigned int turns_taken(std::shared_ptr<game_application> app,
                         std::shared_ptr<player> game_player,
                         std::shared_ptr<board> game_board,
                         char marker,
                         unsigned int &markers_placed)
{
    app->play_game(game_player, game_board, marker);
    ++markers_placed;
    game_board->display();
    std::cout << "============================================" << std::endl;

    return markers_placed;
}

int main()
{
    std::cout << "Ready to Play Tic Tac Toe? Lets goooooo!" << std::endl;
    std::cout << "Here is your game board" << std::endl;
    std::shared_ptr<game_application> app{new game_application{}};

    //create, get and display board
    auto game_board = app->get_game_board();
    game_board->display();
    std::cout << "----------******************----------------" << std::endl;

    //init player
    auto player1 = app->initialize_player();
    auto player2 = app->initialize_player();
    std::cout << player1->get_name()  << " has joined and his marker is (X) "<< std::endl;
    std::cout << player2->get_name()  << " has joined and his marker is (O)"<< std::endl;
    std::cout << "----------******************----------------" << std::endl;

    static constexpr unsigned int NO_OF_CELLS_ON_BOARD{9};
    static constexpr unsigned int LEAST_NUMBER_OF_TURNS_NEEDED_FOR_A_PLAYER_TO_WIN{5};
    static constexpr char MARKER_X{'X'};
    static constexpr char MARKER_O{'O'};

    unsigned int markers_placed  = 0;
    while (true)
    {
        markers_placed = turns_taken(app, player1, game_board, MARKER_X, markers_placed);
        if (markers_placed >= LEAST_NUMBER_OF_TURNS_NEEDED_FOR_A_PLAYER_TO_WIN && game_board->player_won(MARKER_X))
        {
            std::cout << player1->get_name() << " IS THE WINNER" << std::endl;
            return 0;
        }

        if (markers_placed == NO_OF_CELLS_ON_BOARD) //board exhausted
        {
            std::cout << "GAME OVER : IT IS A DRAW" << std::endl;
            return 0;
        }

        markers_placed = turns_taken(app, player2, game_board, MARKER_O, markers_placed);
        if (markers_placed >= LEAST_NUMBER_OF_TURNS_NEEDED_FOR_A_PLAYER_TO_WIN && game_board->player_won(MARKER_O))
        {
            std::cout << player2->get_name() << " IS THE WINNER" << std::endl;
            return 0;
        }
    }

    game_board->display();

    return 0;
}


