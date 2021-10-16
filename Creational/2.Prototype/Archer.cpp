#include "Archer.hpp"

Warrior* Archer::clone()
{
    return new Archer(*this);
}