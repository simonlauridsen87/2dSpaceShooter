#include "Game.hpp"
#include "states/State.hpp"
#include "Gui.hpp"

Game::Game(State* state) : currentState(state) {
    Gui gui = Gui();
    // Constructor - states will be registered after creation
}

void Game::registerState(StateEnum stateEnum, State* state) {
    states[stateEnum] = state; // Implementation to register a state
}

void Game::changeState(StateEnum stateEnum) {
    //Transition to the new state
    if (states[stateEnum]) {
        currentState = states[stateEnum];
        currentState->enter(this); // Pass game pointer to enter
    }
}

void Game::addPlayer(Player* player) {
    if (players[0] == nullptr) {
        players[0] = player;
    } else if (players[1] == nullptr) {
        players[1] = player;
    }
}

void Game::tick() {
    if (currentState) {
        StateEnum nextStateEnum = currentState->update(this); // Pass game pointer to update
        if (nextStateEnum != StateEnum::GAME_OVER) { // Check for game over condition
            changeState(nextStateEnum); // Transition to the next state
        }
    }
}