#include "topics.h"
#include <iostream>

int sum01(int a, int b){
    return a + b;
}

double sum01(double a, double b){ // Overload on type
    return a + b;
}

int sum01(int a, int b, int c){ // Overload on number of arguments
    return a + b + c;
}
//function sum01 has 2 overloads
void funcOverloading() {
    std::cout << sum01(1, 2) << std::endl;
    std::cout << sum01(1.4, 2.5) << std::endl;
    std::cout << sum01(1, 2, 3) << std::endl;
}
