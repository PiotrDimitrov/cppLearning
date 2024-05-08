#include "topics.h"
#include <iostream>

void ternarOper() {
    int a;
    std::cin >> a;
    /*
    if (a < 10){
      std::cout << "a is less than 10";
    }
    else {
      std::cout << "a is greater than 10";
    } */

    a < 10 ? (std::cout << "a is less than 10\n") : (std::cout << "a is greater than 10\n");
    // ?: is terinary operator where ? is if and : is else
    // (condition)? (if true): (if false)

    int b = 10;
    b < 10 ? (std::cout << "b is less than 10\n") : ((b == 10)? (std::cout << "b is equal to 10\n") : (std::cout << "b is greater than 10\n")); //elif
}