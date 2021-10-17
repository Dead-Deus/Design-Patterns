project(Abstract_Factory)

add_executable(${PROJECT_NAME} Main.cpp
    Factories/GUIFactory.hpp        Factories/GUIFactory.cpp
    Factories/LinuxGUIFactory.hpp   Factories/LinuxGUIFactory.cpp
    Factories/WindowsGUIFactory.hpp Factories/WindowsGUIFactory.cpp

    Objects/Button.hpp          Objects/Button.cpp
    Objects/LinuxButton.hpp     Objects/LinuxButton.cpp
    Objects/WindowsButton.hpp   Objects/WindowsButton.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Factories Objects)