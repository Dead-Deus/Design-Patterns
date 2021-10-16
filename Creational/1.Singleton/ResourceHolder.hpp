#pragma once

class ResourceHolder
{
public:
    static ResourceHolder& getInstance();

private:
    ResourceHolder() = default;
};
