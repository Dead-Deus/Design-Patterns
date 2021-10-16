#include "ResourceHolder.hpp"

ResourceHolder& ResourceHolder::getInstance()
{
    // static ResourceHolder* instance = new ResourceHolder(); // lazy initialization, on call
    // return *instance;

    static ResourceHolder instance; // initialization on startup application
    return instance;
}