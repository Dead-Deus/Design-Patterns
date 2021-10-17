#include "WindowsGUIFactory.hpp"

#include "WindowsButton.hpp"

Button& WindowsGUIFactory::createButton()
{
    return *new WindowsButton();
}