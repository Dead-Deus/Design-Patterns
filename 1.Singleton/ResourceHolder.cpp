#include "ResourceHolder.hpp"

ResourceHolder::ResourceHolder()
{
}

ResourceHolder::~ResourceHolder()
{
}

ResourceHolder& ResourceHolder::getInstance()
{
    // static ResourceHolder* instance = new ResourceHolder(); // lazy initialization, on call
    // return *instance;

    static ResourceHolder instance; // initialization on startup
    return instance;
}