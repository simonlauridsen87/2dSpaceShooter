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
    // This state will immediately transition to the next state, so we can return the next state enum
    return StateEnum::READ_INPUTS;
};