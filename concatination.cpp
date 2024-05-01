#include "topics.h"
#include <iostream>

void concat(const char x[], const char y[], char* z) {
    int i = 0;
    int j = 0;
    while (x[i] != '\0') {
        z[i] = x[i];
        i++;
    }
    do {
        z[i] = y[j];
        i++; j++;
    } while (y[j] != '\0');
}

void concatination() {
    char a[] = "Hello ";
    char b[] = "World";
    char c[255];
    concat(a, b, c);
    std::cout << c;
}