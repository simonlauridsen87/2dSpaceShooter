#ifndef STATE_HPP
#define STATE_HPP

class Game;

class State {
    public:
        virtual ~State() = default;
        virtual void enter(Game* game) = 0;  // Pure virtual function with game parameter
};

#endif