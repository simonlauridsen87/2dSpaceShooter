#include <stdio.h>
#include "pico/stdlib.h"
#include "Game.hpp"
#include "states/Read.hpp"
#include "states/Tick.hpp"


    int main()
{
    stdio_init_all(); // Temporary state for initial setup

    Game game = Game();
    game.registerState(StateEnum::READ, new Read());
    game.registerState(StateEnum::TICK, new Tick());

    game.changeState(StateEnum::READ);

    while (true) {
        // Main loop can be expanded to handle state updates
        sleep_ms(1000);
    }
}
