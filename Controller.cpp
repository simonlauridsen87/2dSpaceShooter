#include "Controller.hpp"

Controller::Controller(Player* player) : player(player) {}

void Controller::movePlayer(uint16_t newPosition)
{
    player->setPosition(newPosition);
}
