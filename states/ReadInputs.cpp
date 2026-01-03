#include "ReadInputs.hpp"
#include "Game.hpp"
#include <stdio.h>

void ReadInputs::enter(Game* game) {
    printf("Entering Read state\n");
    game->changeState(StateEnum::MOVE_PLAYERS);
    printf("Error changing state to TICK\n");
};