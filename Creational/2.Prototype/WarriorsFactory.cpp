#include "WarriorsFactory.hpp"

#include "Infantryman.hpp"
#include "Archer.hpp"
#include "Horseman.hpp"

WarriorsFactory& WarriorsFactory::getInstance()
{
    static WarriorsFactory instance;
    return instance;
}

Warrior* WarriorsFactory::createInfantrman()
{
    static Infantryman prototype;
    return prototype.clone();
}
Warrior* WarriorsFactory::createArcher()
{
    static Archer prototype;
    return prototype.clone();
}
Warrior* WarriorsFactory::createHorseman()
{
    static Horseman prototype;
    return prototype.clone();
}