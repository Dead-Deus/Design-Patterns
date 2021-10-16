#pragma once

#include "Warrior.hpp"

class Horseman : public Warrior
{
    friend class WarriorsFactory;

public:
    Warrior* clone();

private:
    Horseman() = default;
};
