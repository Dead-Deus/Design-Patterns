#include "Director.hpp"
#include "FairBuilder.hpp"
#include "UnfairBuilder.hpp"
#include "Object.hpp"

void clientCode(Builder& builder);

int main()
{
    FairBuilder fairBuilder;
    clientCode(fairBuilder);

    UnfairBuilder unfairBuilder;
    clientCode(unfairBuilder);
}

void clientCode(Builder& builder)
{
    Director director;

    director.construct(builder);

    Object& obj = builder.getObject();
}

// Applicability:
// To get rid of a “telescopic constructor”
// Create different representations of some product
// Use the Builder to construct Composite trees or other complex objects

// Example:
// Any complex object which have components (car{engine, seats, glass...})

// Pros:                                                                        Cons:
// [+] You can construct objects step-by-step                                   [-] The overall complexity of the code increases since
//                                                                                  the pattern requires creating multiple new classes
// [+] You can reuse the same construction code
//     when building various representations of products
// [+] Single Responsibility Principle