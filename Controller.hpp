#pragma once
#include <stdint.h>
#include "Player.hpp"

class Controller
{
    public:
        Controller(Player* player);
        void movePlayer(uint16_t newPosition);
    private:
        Player* player;
};
