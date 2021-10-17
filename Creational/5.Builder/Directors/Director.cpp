#include "Director.hpp"

#include "Builder.hpp"

void Director::construct(Builder& builder)
{
    builder.createProduct();
    builder.buildPart1(1);
    builder.buildPart2(2);
}