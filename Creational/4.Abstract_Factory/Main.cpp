#include "GUIFactory.hpp"
#include "LinuxGUIFactory.hpp"
#include "WindowsGUIFactory.hpp"
#include "Button.hpp"

// GUI
Button& createButton(GUIFactory& GUIFactory);

int main()
{
    GUIFactory* GUIFactory1 = new LinuxGUIFactory();
    Button&     button1     = createButton(*GUIFactory1);

    delete &button1;
    delete GUIFactory1;

    GUIFactory* GUIFactory2 = new WindowsGUIFactory();
    Button&     button2     = createButton(*GUIFactory2);

    delete &button2;
    delete GUIFactory2;
}

Button& createButton(GUIFactory& GUIFactory)
{
    return GUIFactory.createButton();
}

// Applicability:
// Your code needs to work with various families of related products,
// but you don’t want it to depend on the concrete classes of those products

// Example:
// GUI

// Pros:                                                                        Cons:
// [+] You can be sure that the products                                        [-] The code may become more complicated than it should be
//     you’re getting from a factory are compatible with each other
// [+] You avoid tight coupling between concrete products and client code
// [+] Single Responsibility Principle
// [+] Open/Closed Principle