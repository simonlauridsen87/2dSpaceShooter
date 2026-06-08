#include "InitGame.hpp"
#include "Game.hpp"
#include <stdio.h> 

void InitGame::enter(Game* game) {
    printf("Entering InitGame state\n");
    // Initialize game variables, load assets, etc.
    // For now, we will just transition to the next state
    game->changeState(StateEnum::READ_INPUTS);
};

StateEnum InitGame::update(Game* game) {
    Player p1 = Player(160, 1);
    game->addPlayer(&p1);



    return StateEnum::READ_INPUTS;
};