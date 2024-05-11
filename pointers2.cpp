#include "topics.h"
#include <iostream>

void pointers2 ()
{
    int a = 5;
    int *pa = &a;
    std::cout << "a:\t\t" << a << std::endl;
    std::cout << "*pa:\t" << *pa << std::endl;
    std::cout << "pa:\t\t" << pa << std::endl;
    std::cout << "&a:\t\t" << &a << std::endl;
    std::cout << "*&a:\t\t" << *&a << std::endl;
    std::cout << "&*pa:\t" << &*pa << std::endl;
    std::cout << "&pa:\t" << &pa << std::endl;
    int nums[5] = {10, 20, 30, 40, 50};
    std::cout << "nums:\t" << *nums << std::endl; // nums is a pointer to the first element
    std::cout << "nums:\t" << *(nums+1) << std::endl; //arithmetic of pointers
}