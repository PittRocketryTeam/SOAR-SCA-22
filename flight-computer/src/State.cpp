#include "State.hpp"

Health& State::getHealthPkt()
{
    return mHealth;
}

Orientation& State::getOrientationPkt()
{
    return mOrientation;
}