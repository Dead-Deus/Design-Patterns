#include "UnfairBuilder.hpp"

#include "Object.hpp"

void UnfairBuilder::createProduct()
{
    m_object = new Object();
}

void UnfairBuilder::buildPart1(int part1)
{
    m_object->x = part1 + 1;
}

void UnfairBuilder::buildPart2(int part2)
{
    m_object->y = part2 + 2;
}