#include "topics.h"
#include <iostream>
#include <string>

int string_len(const char s[]){
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void symbol(char* s){
    s[0] = 'G';
}

void strings2() {
    char str[] = "Hello";
    std::cout << string_len(str) << std::endl;
    symbol(str);
    std::cout << str;

    std::string colour[]
            = { "Blue", "Red", "Orange", "Yellow" };
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}
