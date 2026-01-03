
#include "State.hpp"

class Tick : public State {
    public:
        void enter(Game* game) override;
};