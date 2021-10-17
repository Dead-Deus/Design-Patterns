#include <fstream>

#include "Button.hpp"
#include "LinuxButton.hpp"
#include "WindowsButton.hpp"

Button* createButton(const std::string& buttonType);
void    clientCode();

int main()
{
    clientCode();
}

Button* createButton(const std::string& buttonType) // factoryMethod1
{
    return buttonType == "Linux" ? dynamic_cast<Button*>(new LinuxButton()) : dynamic_cast<Button*>(new WindowsButton());
}

void clientCode()
{
    Button* button1 = createButton("Linux");
    Button* button2 = createButton("Windows");

    delete button2;
    delete button1;
}

/*
Label* createLabel(const std::string& labelType) // factoryMethod2
{
    return buttonType == "Linux" ? dynamic_cast<Button*>(new LinuxLabel()) : dynamic_cast<Button*>(new WindowsLabel());
}
*/

// Applicability:
// You don’t know beforehand the exact types and dependencies of the objects

// Example:
// Creator (Spawner) [Network -> (type) -> Spawner.spawnEnemy(ObjectType type); -> factoryMethod1]
// Creator (Spawner) [Network -> (type) -> Spawner.spawnFriend(ObjectType type); -> factoryMethod2]

// Pros:                                                                        Cons:
// [+] You avoid tight coupling between the creator and the concrete products   [-] The code may become more complicated
// [+] Single Responsibility Principle                                              since you need to introduce a lot
// [+] Open/Closed Principle                                                        of new subclasses to implement the pattern