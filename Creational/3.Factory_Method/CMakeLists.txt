project(Factory_Method)

add_executable(${PROJECT_NAME} Main.cpp
    Objects/Button.hpp          Objects/Button.cpp
    Objects/LinuxButton.hpp     Objects/LinuxButton.cpp
    Objects/WindowsButton.hpp   Objects/WindowsButton.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Objects)

add_custom_command(                                                                                                                                                       
    TARGET ${PROJECT_NAME}
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${PROJECT_SOURCE_DIR}/Assets
    $<TARGET_FILE_DIR:${PROJECT_NAME}>/Assets
)
