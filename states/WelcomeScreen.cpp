#include "WelcomeScreen.hpp"
#include "Game.hpp"
#include <stdio.h>

void WelcomeScreen::enter(Game* game) {
    printf("Entering Welcome Screen state\n");
    game->changeState(StateEnum::INIT_GAME);
    printf("Error changing state to INIT_GAME\n");
};