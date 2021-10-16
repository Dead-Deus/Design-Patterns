project(Prototype)

add_executable(${PROJECT_NAME} Main.cpp 
    Prototype/Color.hpp Prototype/Color.cpp 
)

target_include_directories(${PROJECT_NAME} PRIVATE Prototype)