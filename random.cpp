#include "topics.h"
#include <iostream>
#include <ctime>

void random ()
{
    srand(1); //randomizer seed
    int a;
    a = rand();
    std::cout << a << std::endl;
    a = rand();
    std::cout << a << std::endl; //prints the same numbers every time

    srand(time(0)); //randomizer seed
    int b = rand();
    std::cout << b << std::endl; //prints different numbers every time
    int c = rand() % 11; //random number between 0 and 10
    std::cout << c << std::endl;
}