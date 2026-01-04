#include "WelcomeScreen.hpp"
#include "Game.hpp"
#include <stdio.h>

void WelcomeScreen::enter(Game* game) {
    
    game->gui.clear();
    game->gui.writeText("Welcome to 2D Space Shooter!", 10, 50, 300);

    sleep_ms(2000); // Display welcome message for 2 seconds
    
    game->changeState(StateEnum::INIT_GAME);
    
};