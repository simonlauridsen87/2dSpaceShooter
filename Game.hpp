#include <map>
#include "states/StateEnum.hpp"
#include "Gui.hpp"
#include "Player.hpp"

class State;

class Game {
    public:
        Game(State *initialState = nullptr);
        Gui gui;
        void registerState(StateEnum stateEnum, State* state);
        void changeState(StateEnum stateEnum);
        void addPlayer(Player* player);
        void tick();

    private:
        State* currentState;
        std::map<StateEnum, State*> states;
        std::array<Player*, 2> players;
};