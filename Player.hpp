#pragma once
#include <stdint.h>

class Player
{
    public:
        Player(uint16_t startingPosition, uint8_t id = 0) : position(startingPosition), playerId(id) {};
        void setPosition(uint16_t newPosition);
    private:
        uint16_t position;
        uint8_t playerId;
};