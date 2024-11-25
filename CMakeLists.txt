cmake_minimum_required(VERSION 3.29)
project(a_stack_of_dishes_NootNoot750f)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(a_stack_of_dishes_NootNoot750f
    DishStack.cpp
    DishStack.h
        main.cpp
        Dish.h
        Dish.cpp)
