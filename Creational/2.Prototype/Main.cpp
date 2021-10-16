#include <vector>

#include "WarriorsFactory.hpp"

int main()
{
    WarriorsFactory& warriorsFactory = WarriorsFactory::getInstance();

    std::vector<Warrior*> warriors;
    warriors.push_back(warriorsFactory.createInfantrman());
    warriors.push_back(warriorsFactory.createArcher());
    warriors.push_back(warriorsFactory.createHorseman());
}