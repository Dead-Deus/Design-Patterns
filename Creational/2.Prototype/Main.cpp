#include "Color.hpp"

void clientCode();

int main()
{
    clientCode();
}

void clientCode()
{
    Color someColor1{1, 2, 3};
    Color someColor2 = someColor1;
}

// Prototype included in c++ (copy constructor)