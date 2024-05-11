#include "topics.h"
#include <iostream>

namespace ovrld{
    int sum(int a, int b){
        return a + b;
    }
    double sum(double a, double b){ // Overload on type
        return a + b;
    }
    int sum(int a, int b, int c){ // Overload on number of arguments
        return a + b + c;
    }
}

//function sum01 has 3 overloads
void funcOverloading() {
    std::cout << ovrld::sum(1, 2) << std::endl;
    std::cout << ovrld::sum(1.4, 2.5) << std::endl;
    std::cout << ovrld::sum(1, 2, 3) << std::endl;
}