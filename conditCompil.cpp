#include "topics.h"
#include <iostream>

#define DEBUG   //comment this to inverse

void conditCompil(){

#ifdef DEBUG
    std::cout << "Debug defined\n";
#else
    cout << "Debug not defined\n";
#endif

#ifndef DEBUG   //inversed ifdef
    std::cout << "Debug not defined\n";
#else
    std::cout << "Debug defined\n";
#endif
}