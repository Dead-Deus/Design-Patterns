#pragma once

#include "Warrior.hpp"

class Infantryman : public Warrior
{
    friend class WarriorsFactory;

public:
    Warrior* clone();

private:
    Infantryman() = default;
};
