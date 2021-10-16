#include "ResourceDB.hpp"

void clientCode();

int main()
{
    clientCode();
}

// Everywhere
void clientCode()
{
    ResourceDB& resourceDB = ResourceDB::getInstance();
    // Resource& resource = ResourceDB::getResource(...);
}

// Applicability:
// You need single instance

// Example:
// Database

//  Pros:                           Cons:
//  [+] Only a single instance      [-] Violates the Single Responsibility Principle
//  [+] Global access               [-] Singleton pattern can mask bad design
//                                  [-] The pattern requires special treatment in a multithreaded environment