#include "topics.h"
#include <iostream>
#include <vector>
#include <algorithm>

namespace cpy{
    void printVector(const std::vector<int> &v)
    {
        for (auto i : v)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        return;
    }
}

void copyStl() {
    std::vector <int> vec = {4, 3, 17, 1, 6, 2, 8, 9, 10, 5, 7, 11};
    std::vector <int> vec2 = {-1};
    std::vector <int> vec3 = {-1};
    std::copy(vec.begin(), vec.end(), back_inserter(vec2));
    cpy::printVector(vec2);
    std::copy_if(vec.begin(), vec.end(), back_inserter(vec3), [](int i) {return i % 2 == 0;}); //unar predicate
    cpy::printVector(vec3);
}