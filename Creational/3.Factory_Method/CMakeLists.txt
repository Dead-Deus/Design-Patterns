project(Factory_Method)

add_executable(${PROJECT_NAME} Main.cpp
    Objects/Button.hpp          Objects/Button.cpp
    Objects/LinuxButton.hpp     Objects/LinuxButton.cpp
    Objects/WindowsButton.hpp   Objects/WindowsButton.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Objects)