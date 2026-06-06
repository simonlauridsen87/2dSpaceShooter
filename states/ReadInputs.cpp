#include "ReadInputs.hpp"
#include "Game.hpp"
#include <stdio.h>

void ReadInputs::enter(Game* game) {
    printf("Entering Read state\n");
};

StateEnum ReadInputs::update(Game* game) {  
    // This state will immediately transition to the next state, so we can return the next state enum
    return StateEnum::MOVE_PLAYERS;
};