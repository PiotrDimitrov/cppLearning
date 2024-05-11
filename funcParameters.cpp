#include "topics.h"
#include <iostream>

namespace fprmt{
    int func1(int a){ // parameter by value
        a = 2;
        return 0;
    }
    int func2(int &a){ // parameter by reference
        a = 3;
        return 0;
    }
    int func3(int* a){ // parameter by pointer
        *a = 4;
        return 0;
    }
}

void funcParameters() {
    int n = 1;
    std::cout << n << std::endl;
    fprmt::func1(n);
    std::cout << n << std::endl; // 1 (n is not changed)
    fprmt::func2(n);
    std::cout << n << std::endl; // 3
    fprmt::func3(&n);
    std::cout << n << std::endl; // 4
}