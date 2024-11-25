

#ifndef DISHSTACK_H
#define DISHSTACK_H
#include <iostream>
#include <vector>
#include <array>

#include "Dish.h"
class Dish;
using namespace std;


class DishStack {
public:
    DishStack() = default;
    void push(const Dish &dish);

    Dish pop();
    Dish peek() const;
    int size() const;


private:
    static const int maxSize = 5;
    array<Dish,maxSize> stack;
    int top = -1;


};

#endif //DISHSTACK_H
