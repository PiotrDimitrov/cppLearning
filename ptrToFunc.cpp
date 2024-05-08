#include "topics.h"
#include <iostream>

void displayInfo(std::string (*function)())
{
    std::cout << "INFO: \n";
    std::cout << function() << std::endl;
}

std::string Database()
{
    return "//from Database";
}

std::string Server()
{
    return "//from Server";
}

std::string Client()
{
    return "//from Client";
}

std::string Network()
{
    return "//from Network";
}

void ptrToFunc() {
    displayInfo(Client);
    displayInfo(Database);
}
