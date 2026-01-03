#include "State.hpp"

class WelcomeScreen : public State {
    public:
        void enter(Game* game) override;
};