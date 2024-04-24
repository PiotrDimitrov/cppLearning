#include "topics.h"
#include <iostream>

void typeCast() {
    double a = 33.3;
    std::cout << (int)a << std::endl;   //to int
    std::cout << (char)a << std::endl;  //to char
    char c = '9';
    std::cout << (int)c << std::endl; //char to int using ASCII
}