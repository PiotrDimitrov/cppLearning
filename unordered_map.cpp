#include "topics.h"
#include <iostream>
#include <unordered_map>

namespace unrdmp{

}

void unordered_map(){
    std::unordered_map<int, char> mp;
    mp[1] = 'a';
    mp[2] = 'b';
    mp[4] = 'd';
    mp.insert(std::make_pair(5, 'e'));

    std::cout << "mp size: " << mp.size() << std::endl;
    std::cout << "mp element at 1: " << mp.at(1) << std::endl;
    //std::cout << "mp element at 3: " << mp.at(3) << std::endl; //out of range
    std::cout << "mp element at 4: " << mp[4] << std::endl;

    int key = 4;
    if (mp.find(key) == mp.end()){
        std::cout << key << " not found\n\n";
    } else {
        std::cout << "Found " << key << "\n\n";
    }

    std::cout << "mp begin: " << mp.begin()->first << ' ' << mp.begin()->second << std::endl;
    //std::cout << "mp end: " << mp.end()->first << ' ' << mp.end()->second << std::endl; //error as mp.end is like nullptr

    for (auto itr = mp.begin(); itr != mp.end(); itr++){
        // auto = unordered_map<string, double>::iterator
        std::cout << itr->first << ' ' << itr->second << std::endl;
    }

    //mp.begin()->first = 6; //can't be changed
    mp.begin()->second = 'E';

    std::cout << "mp begin: " << mp.begin()->first << ' ' << mp.begin()->second << std::endl;

    key = 5;
    std::cout << "count of elements with key " << key << ": " << mp.count(key) << std::endl;
    //count can be 1 or 0
};