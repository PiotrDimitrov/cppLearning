#include "topics.h"
#include <iostream>

int value100 = 100;  //global variables are initialized outside any functions
double pi = 3.1415;  //we can access them from ANY block
namespace scp{
    int arc_length(int radius) {
        return 2 * pi * radius; //we can access pi from any other functions
    }
}

void varScope() {
    std::cout << pi << std::endl; //we can access pi from main
    std::cout << scp::arc_length(5) << std::endl;

    {
        int a = 5;
        std::cout << a << std::endl; //a is local var
    }

    //std::cout << a << std::endl; //we cannot access a from here
}
