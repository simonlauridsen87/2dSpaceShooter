
#include "State.hpp"

class MovePlayers : public State {
    public:
        void enter(Game* game) override;
        StateEnum update(Game* game) override;
};