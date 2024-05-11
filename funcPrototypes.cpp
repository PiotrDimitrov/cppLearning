#include "topics.h"
#include <iostream>

//functions in c++ requires strict order in your code
namespace prttps{
    // Function Prototype
    int sum(int a, int b);

    void message(){
        std::cout << "1 + 1 = " << sum(1, 1) << std::endl;
    }

    int sum(int a, int b) {
        return a + b;
    }
}

void funcPrototypes() {
    int x, y;
    prttps::message();
    std::cin >> x >> y;
    int z = prttps::sum(x, y);
    std::cout << z;
}