#include <map>
#include "states/StateEnum.hpp"
#include "Gui.hpp"

class State;

class Game {
    public:
        Game(State *initialState = nullptr);
        Gui gui;
        void registerState(StateEnum stateEnum, State* state);
        void changeState(StateEnum stateEnum);
        Player addPlayer();
        void tick();

    private:
        State* currentState;
        std::map<StateEnum, State*> states;
        std::array<Player*, 2> players;
};