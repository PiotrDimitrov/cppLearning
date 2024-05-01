#include "topics.h"
#include <iostream>
#include <string>

void stringLib() {
    // string output
    std::string a = "Hello!";
    std::cout << a << std::endl;

    //string input
    std::string b;
    std::cout << "Type something:..."  << std::endl;
    std::cin >> b;
    std::cout << b << std::endl;

    //concatenation
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName;
    std::cout << fullName << std::endl;

    //string numbers
    std::string x = "10";
    std::string y = "20";
    std::string z = x + y;   // z will be 1020 (a string)

    //string length
    std::string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "The length of the txt string is: " << txt.length() << std::endl;

    //string access
    std::string myString = "Hello";
    std::cout << myString[0] << std::endl;  // Outputs H
    std::cout << myString[4] << std::endl;  // Outputs o

}