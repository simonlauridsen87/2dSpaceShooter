#include "MovePlayers.hpp"
#include "Game.hpp"
#include <stdio.h>

void MovePlayers::enter(Game* game) {
    printf("Entering Tick state\n");
};

StateEnum MovePlayers::update(Game* game) {  
    // This state will immediately transition to the next state, so we can return the next state enum
    return StateEnum::READ_INPUTS;
};