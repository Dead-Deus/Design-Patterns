#include <fstream>

#include "Button.hpp"
#include "LinuxButton.hpp"
#include "WindowsButton.hpp"

Button* clientCode(const std::string& buttonType); // factoryMethod

int main()
{
    std::ifstream config("Assets/Config.cfg");
    std::string   buttonType;
    config >> buttonType;

    Button* button = clientCode(buttonType);
}

Button* clientCode(const std::string& buttonType)
{
    return buttonType == "Linux" ? dynamic_cast<Button*>(new LinuxButton()) : dynamic_cast<Button*>(new WindowsButton());
}

// Applicability:
// You don’t know beforehand the exact types and dependencies of the objects

// Example:
// Creator (Spawner) [Network -> (type) -> Spawner.spawn(ObjectType type); -> factoryMethod]

// Pros:                                                                        Cons:
// [+] You avoid tight coupling between the creator and the concrete products   [-] The code may become more complicated
// [+] Single Responsibility Principle                                              since you need to introduce a lot
// [+] Open/Closed Principle                                                        of new subclasses to implement the pattern