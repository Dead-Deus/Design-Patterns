#pragma once

#include "GUIFactory.hpp"

class WindowsButton;

class WindowsGUIFactory : public GUIFactory
{
public:
    virtual ~WindowsGUIFactory() = default;

    Button& createButton() override;
};