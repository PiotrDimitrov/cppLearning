#include "topics.h"
#include <iostream>

void ascii() {
    std::cout << sizeof(char) << std::endl;
    setlocale(LC_ALL, "ru");
    //ASCII codes
    for (int i = 0; i < 256; i++) {        // codes between 33 and 127
        std::cout << i << "\t" << char(i) << std::endl;  //are used as default english
        //keyboard symbols
    } //codes after 127 are national and are set by setlocale()
    //codes before 33 are not used
}