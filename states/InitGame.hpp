#include "State.hpp"

class InitGame : public State {
    public:
        void enter(Game* game) override;
        StateEnum update(Game* game) override;
};