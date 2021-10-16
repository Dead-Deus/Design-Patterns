#include "Infantryman.hpp"

Warrior* Infantryman::clone()
{
    return new Infantryman(*this);
}