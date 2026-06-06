
#include "State.hpp"

class ReadInputs : public State {
    public:
        void enter(Game* game) override;
        StateEnum update(Game* game) override;
};