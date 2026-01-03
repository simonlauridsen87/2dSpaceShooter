#include <stdio.h>
#include "pico/stdlib.h"
#include "Game.hpp"
#include "states/ReadInputs.hpp"
#include "states/MovePlayers.hpp"
#include "states/WelcomeScreen.hpp"


    int main()
{
    stdio_init_all(); // Temporary state for initial setup

    Game game = Game();
    game.registerState(StateEnum::WELCOME_SCREEN, new WelcomeScreen());
    game.registerState(StateEnum::READ_INPUTS, new ReadInputs());
    game.registerState(StateEnum::MOVE_PLAYERS, new MovePlayers());

    game.changeState(StateEnum::WELCOME_SCREEN);

    while (true) {
        // Main loop can be expanded to handle state updates
        sleep_ms(1000);
    }
}
