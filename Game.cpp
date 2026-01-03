#include "Game.hpp"
#include "states/State.hpp"

Game::Game(State* state) : currentState(state) {
    // Constructor - states will be registered after creation
}

void Game::registerState(StateEnum stateEnum, State* state) {
    states[stateEnum] = state; // Implementation to register a state
}

void Game::changeState(StateEnum stateEnum) {
    if (states[stateEnum]) {
        currentState = states[stateEnum];
        currentState->enter(this); // Pass game pointer to enter
    }
}