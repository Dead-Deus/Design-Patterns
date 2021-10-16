#include "ResourceDB.hpp"

ResourceDB& ResourceDB::getInstance()
{
    // static ResourceDB* instance = new ResourceDB(); // lazy initialization, on call
    // return *instance;

    static ResourceDB instance; // initialization on startup application
    return instance;
}