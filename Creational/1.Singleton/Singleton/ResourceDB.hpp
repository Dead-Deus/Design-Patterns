#pragma once

class ResourceDB
{
public:
    static ResourceDB& getInstance();

    // Resource& getResource(ResouceID id);

private:
    ResourceDB() = default;
};
