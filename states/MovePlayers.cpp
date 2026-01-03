#include "MovePlayers.hpp"
#include "Game.hpp"
#include <stdio.h>

void MovePlayers::enter(Game* game) {
    printf("Entering Tick state\n");
    game->changeState(StateEnum::READ_INPUTS);
};