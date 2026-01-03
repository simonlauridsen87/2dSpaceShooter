#include "Tick.hpp"
#include "Game.hpp"
#include <stdio.h>

void Tick::enter(Game* game) {
    printf("Entering Tick state\n");
    game->changeState(StateEnum::READ);
};