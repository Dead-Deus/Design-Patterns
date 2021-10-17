project(Builder)

add_executable(${PROJECT_NAME} Main.cpp
    Builders/Builder.hpp        Builders/Builder.cpp
    Builders/FairBuilder.hpp    Builders/FairBuilder.cpp
    Builders/UnfairBuilder.hpp  Builders/UnfairBuilder.cpp

    Objects/Object.hpp  Objects/Object.cpp

    Directors/Director.hpp  Directors/Director.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE Builders Objects Directors)