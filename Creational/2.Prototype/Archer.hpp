#pragma once

#include "Warrior.hpp"

class Archer : public Warrior
{
    friend class WarriorsFactory;

public:
    Warrior* clone();

private:
    Archer() = default;
};
