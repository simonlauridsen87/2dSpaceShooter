#include <stdio.h>
#include "pico/stdlib.h"
#include "Game.hpp"
#include "states/ReadInputs.hpp"
#include "states/MovePlayers.hpp"
#include "states/WelcomeScreen.hpp"
#include "states/InitGame.hpp"

    int main()
{
    stdio_init_all(); // Temporary state for initial setup
    printf("Starting game...\n");
    Game game = Game();
    game.registerState(StateEnum::WELCOME_SCREEN, new WelcomeScreen());
    game.registerState(StateEnum::INIT_GAME, new InitGame()); // Placeholder for INIT_GAME state
    game.registerState(StateEnum::READ_INPUTS, new ReadInputs());
    game.registerState(StateEnum::MOVE_PLAYERS, new MovePlayers());

    game.changeState(StateEnum::WELCOME_SCREEN);

    while (true) {
        // Main loop can be expanded to handle state updates
        game.tick(); // Call tick to update the current state and handle transitions
        sleep_ms(1000);
    }
}
