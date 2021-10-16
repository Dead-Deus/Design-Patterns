#pragma once

class Warrior;

class WarriorsFactory
{
public:
    static WarriorsFactory& getInstance();

    Warrior* createInfantrman();
    Warrior* createArcher();
    Warrior* createHorseman();

private:
    WarriorsFactory() = default;
};
