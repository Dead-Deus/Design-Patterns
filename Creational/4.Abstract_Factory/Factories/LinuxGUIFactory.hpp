#pragma once

#include "GUIFactory.hpp"

class LinuxButton;

class LinuxGUIFactory : public GUIFactory
{
public:
    virtual ~LinuxGUIFactory() = default;

    Button& createButton() override;
};