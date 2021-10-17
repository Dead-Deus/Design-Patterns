#include "LinuxGUIFactory.hpp"

#include "LinuxButton.hpp"

Button& LinuxGUIFactory::createButton()
{
    return *new LinuxButton();
}