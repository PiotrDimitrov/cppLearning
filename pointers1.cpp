#include "topics.h"
#include <iostream>

void pointers1 () {
int a = 5;
int b = a;
int* c = &a;

std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << *c << std::endl;

a++;

std::cout << std::endl;

std::cout << "a: " << a << std::endl;
std::cout << "b: " << b << std::endl;
std::cout << "c: " << *c << std::endl;
}
