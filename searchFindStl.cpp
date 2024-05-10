#include "topics.h"
#include <iostream>
#include <algorithm>
#include <vector>

void searchFindStl() {
    std::vector <int> vec = {4, 3, 17, 1, 6, 2, 8, 9, 10, 5, 7, 11};
    auto pos = std::find(vec.begin(), vec.end(), 6);
    if (pos != vec.end())
    {
        std::cout << "Found " << *pos << std::endl;
    } else
    {
        std::cout << "Not found" << std::endl;
    }
    auto res = std::find_if(vec.begin(), vec.end(), [](int x) { return x <= 1; });
    if (res != vec.end())
    {
        std::cout << "Found " << *res << std::endl;
    }

}
