#pragma once

class Object;

class Builder
{
public:
    virtual ~Builder();

    virtual void createProduct()       = 0;
    virtual void buildPart1(int part1) = 0;
    virtual void buildPart2(int part2) = 0;

    Object& getObject();

protected:
    Object* m_object;
};
