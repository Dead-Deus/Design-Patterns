project(Prototype)

add_executable(${PROJECT_NAME} Main.cpp
    Warrior.hpp Warrior.cpp
    Infantryman.hpp Infantryman.cpp
    Archer.hpp Archer.cpp
    Horseman.hpp Horseman.cpp
    WarriorsFactory.hpp WarriorsFactory.cpp
)