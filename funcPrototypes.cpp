#include "topics.h"
#include <iostream>

//functions in c++ requires strict order in your code

// Function Prototypes
int sum(int a, int b);
void message();


void funcPrototypes() {
    int x, y;
    message();
    std::cin >> x >> y;
    int z = sum(x, y);
    std::cout << z;

}
//these functions are invisible for main as they are found after main function block
//but prototypes allow to use them in main

int sum(int a, int b) {
    return a + b;
}

void message(){
    std::cout << "Enter 2 integers: \n";
}
