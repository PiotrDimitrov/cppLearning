#include <iostream>
#include "topics.h"
#include <algorithm>
#include <vector>

namespace srt{
    bool lessThan(int a, int b) {
        return b < a;
    }

    bool test(int a, int b){
        if (a % 2 == 0 && b % 2 != 0) {return true;}
        if (a % 2 != 0 && b % 2 == 0) {return false;}
        return a < b;
    }
}


void stlSorting() {
    std::vector<int> vec = {5, 3, 11, 10, 1, 7, 6, 19, 4};
    sort(vec.begin(), vec.end(), srt::test);
    //third parameter - binary predicate (third parameter is not mandatory)
    //binary predicate - function that takes two arguments and returns a boolean value
    for (auto e : vec) {
        std::cout << e << " ";
    }
}