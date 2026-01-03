#include <map>
#include "states/StateEnum.hpp"

class State;

class Game {
    public:
        Game(State *initialState = nullptr);
        void registerState(StateEnum stateEnum, State* state);
        void changeState(StateEnum stateEnum);

    private:
        State* currentState;
        std::map<StateEnum, State*> states;
};