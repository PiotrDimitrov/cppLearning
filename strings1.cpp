#include "topics.h"
#include <iostream>
#include <cstring>

void strings1() {
    char symbol = '\0'; // Null character
    char string[] = "Hello";
    std::cout << string << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << *(string+i);    //same as string[i]
    } std::cout << std::endl;
    if (*(string+5) == symbol) {  //that demonstrates that every string
        std::cout << "True\n";           //ends with null character (\0)
    }
    char test[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << test << std::endl;
    std::cout << strlen(test) << std::endl;
}
