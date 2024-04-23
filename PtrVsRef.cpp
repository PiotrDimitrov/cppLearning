#include "topics.h"
#include <iostream>

void PtrVsRef()
{
    int a = 5;
    int* aPtr = &a;  // Pointer to a
    int& aRef = a;   // Reference to a

    std::cout << "aPtr:\t" << *aPtr << "\t" << aPtr << std::endl;
    std::cout << "aRef:\t" << aRef << "\t" << &aRef << std::endl;

    int x = 17;
    int* x1 = &x;    //pointer
    int** x2 = &x1;  //pointer to pointer
    std::cout << "x:\t" << x << std::endl;
    std::cout << "x1:\t" << *x1 << "\t" << x1 << std::endl;
    std::cout << "x2:\t" << **x2 << "\t" << *x2 << "\t" << x2 << std::endl;


    int y = 19;
    int& y1 = y;   //reference
    int& y2 = y1;  //reference to reference
    std::cout << "y:\t" << y << std::endl;
    std::cout << "y1:\t" << y1 << "\t" << &y1 << std::endl;
    std::cout << "y2:\t" << y2 << "\t" << &y2 << "\t" <<  std::endl;
}