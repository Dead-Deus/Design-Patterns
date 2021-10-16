project(Singleton)

add_executable(${PROJECT_NAME} Main.cpp 
    Singleton/ResourceDB.hpp Singleton/ResourceDB.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Singleton)