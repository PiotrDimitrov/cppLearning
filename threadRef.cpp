#include <iostream>
#include <thread>
#include <chrono>
#include "topics.h"

namespace thdrf{
    int increment(int &a)
    {
        std::cout << "increment func started" << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(2000));
        std::cout << "increment func ended" << std::endl;
        return ++a;
    }
}


void threadRef() {
    int x = 10;
    std::thread t1(thdrf::increment, std::ref(x)); //use std::ref to pass by reference instead of &a or a
    std::cout << x << std::endl;
    t1.join();
    std::cout << x << std::endl;
    //int a = 1, b =2;
    //int c = std::thread::hardware_concurrency();
}