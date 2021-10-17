#include "FairBuilder.hpp"

#include "Object.hpp"

void FairBuilder::createProduct()
{
    m_object = new Object();
}

void FairBuilder::buildPart1(int part1)
{
    m_object->x = part1;
}

void FairBuilder::buildPart2(int part2)
{
    m_object->y = part2;
}