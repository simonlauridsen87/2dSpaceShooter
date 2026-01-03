
#include "State.hpp"

class Read : public State {
    public:
        void enter(Game* game) override;
};