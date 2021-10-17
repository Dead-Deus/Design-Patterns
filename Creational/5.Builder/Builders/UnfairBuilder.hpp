#pragma once

#include "Builder.hpp"

class UnfairBuilder : public Builder
{
public:
    void createProduct() override;
    void buildPart1(int part1) override;
    void buildPart2(int part2) override;

private:
};
