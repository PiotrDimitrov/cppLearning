#include "topics.h"
#include <iostream>

namespace tmpl{

template <typename T> //T is name of type
T sum1(T a, T b) {    //type can be any name
  return a + b;
}

template <typename T1, typename T2> //T1 and T2 are names of types
T1 sum(T1 a, T2 b) {
    return a + b;
}
}


void templates() {
    std::cout << tmpl::sum(5, 10) << std::endl; //int
    std::cout << tmpl::sum(1.5, 2.3) << std::endl; //double
    std::cout << tmpl::sum('1', '2') << std::endl; //char
    std::cout << tmpl::sum(1.5, 2) << std::endl; //double and int
}
