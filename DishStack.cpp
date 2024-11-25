//
// Created by nickh on 11/24/2024.
//

#include "DishStack.h"

void DishStack::push(const Dish& dish) {
    if (top < maxSize - 1) {
        stack[++top] = dish;
    } else {
        cout << "The stack is full. Cannot push the dish." << endl;
    }
}

Dish DishStack::pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        cout << "The stack is empty. Cannot pop the dish." << endl;
        return Dish("Empty Dish");
    }
}

Dish DishStack::peek() const {
    if (top >= 0) {
        return stack[top];
    } else {
        cout << "The stack is empty. Cannot peek the dish." << endl;
        return Dish("Empty Dish");
    }
}

int DishStack::size() const {
    return top + 1;
}