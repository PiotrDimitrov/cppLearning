#include "topics.h"
#include <iostream>

void newOperator()
{
    int* px = new int; // allocates dynamic memory for px
    *px = 5;          //px is pointer to some region in dynamic memory
    std::cout << *px << " " << px << std::endl;
    delete px; // deallocates dynamic memory for px
    std::cout << px << std::endl;  // pointer maintain remembering the adress
    px = nullptr; //NULL pointer
}
