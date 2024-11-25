#include "Dish.h"
#include "DishStack.h"
#include <iostream>
using namespace std;

int main() {
    DishStack stack;
    Dish dishOne("Flower Dish");
    Dish dishTwo("Trees Dish");
    Dish dishThree("Fish Dish");

    stack.push(dishOne);
    stack.push(dishTwo);
    stack.push(dishThree);
    cout << "How many dishes on the stack?" << stack.size() << endl;
    Dish peekedDish = stack.peek();
    cout << "Dish on top:" << peekedDish.getDescription() << endl;
    Dish poppedDish = stack.pop();
    cout << "Oh no! The " << poppedDish.getDescription() << " fell off!" << endl;

    return 0;

return 0;

}
