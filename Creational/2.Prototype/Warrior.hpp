#pragma once

class Warrior
{
public:
    virtual Warrior* clone() = 0;
    virtual ~Warrior()       = default;
};
