#include "topics.h"
#include <iostream>

/*
template <typename T> //T is name of type
T sum02 (T a, T b) {    //type can be any name
  return a + b;
}
*/

template <typename T1, typename T2> //T1 and T2 are names of types
T1 sum02 (T1 a, T2 b) {
    return a + b;
}

void templates() {
    std::cout << sum02(5, 10) << std::endl; //int
    std::cout << sum02(1.5, 2.3) << std::endl; //double
    std::cout << sum02('1', '2') << std::endl; //char
    std::cout << sum02(1.5, 2) << std::endl; //double and int
}
