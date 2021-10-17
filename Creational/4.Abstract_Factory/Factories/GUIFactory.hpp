#pragma once

class Button;

class GUIFactory
{
public:
    virtual ~GUIFactory() = default;

    virtual Button& createButton() = 0;
};