#include "topics.h"
#include <iostream>
#include <algorithm>
#include <vector>

namespace prdc{
    bool greaterThanZero(int num) //predicate is a function that returns a bool
    {
        return (num > 0);
    }
}

void predicate() {
    std::vector<int> vec = {-1, 0, -2, 3, 5, -6, 6, 7};
    int result = std::count_if(vec.begin(), vec.end(), prdc::greaterThanZero);
    //algorithm is a function that takes a range of elements and a predicate function
    std::cout << result << std::endl;
}