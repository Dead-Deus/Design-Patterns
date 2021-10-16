#include "Horseman.hpp"

Warrior* Horseman::clone()
{
    return new Horseman(*this);
}