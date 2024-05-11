#include "topics.h"
#include <iostream>

namespace rcn{
    int factorial(int n){
        if (n == 1) {
            return 1; //end condition
        } else {
            return n * factorial(n-1);  // recursive call
        }
    }
}


void recursion() {
    std::cout << rcn::factorial(7);
}
