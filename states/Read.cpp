#include "Read.hpp"
#include "Game.hpp"
#include <stdio.h>

void Read::enter(Game* game) {
    printf("Entering Read state\n");
    game->changeState(StateEnum::TICK);
    printf("Error changing state to TICK\n");
};