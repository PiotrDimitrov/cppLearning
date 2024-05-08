#include "topics.h"
#include <iostream>
#include <list>

void forRangeLoop() {
    int arr[5] = {1, 2, 3, 4, 5};
    std::list<char> lst = {'a', 'b', 'c', 'd', 'e'};

    for (int i : arr)
    {
        std::cout << i << std::endl;
    }

    for (char c : lst)
    {
        std::cout << c << std::endl;
    }


    for (int& i : arr) // & is a reference
    {
        i *= 2;
    }

    for (int i : arr)
    {
        std::cout << i << std::endl;
    }
}
