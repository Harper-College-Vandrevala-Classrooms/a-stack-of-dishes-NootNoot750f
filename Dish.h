//
// Created by nickh on 11/24/2024.
//

#ifndef DISH_H
#define DISH_H
#include <string>
using namespace std;


class Dish {
public:
    Dish() : description("Plain Dish"){};
    Dish(string description) {
        this -> description = description;
    }

    string getDescription() const ;
private:
    string description;
};



#endif //DISH_H
