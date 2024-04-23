#include "topics.h"
#include <iostream>

int factorial01(int n){
    if (n == 1) {
        return 1; //end condition
    } else {
        return n * factorial01(n-1);  // recursive call
    }
}

void recursion() {
    std::cout << factorial01(7);
}
