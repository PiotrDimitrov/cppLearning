#include <iostream>
#include <mutex>
#include <thread>
#include "topics.h"

namespace lkgrd{
    std::mutex mtx;
    void print(char c)
    {
        std::lock_guard<std::mutex> guard(mtx);
        //lock_guard automaticaly locks the mutex in its constructor, and unlocks it in its destructor
        //that means that mtx will be unlocked at the end of print function

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        for (int i = 0 ; i < 4; ++i)
        {
            for (int i = 0; i < 10; i++)
            {
                std::cout << c;
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void lockGuard() {
    std::thread t1(lkgrd::print, '*');
    std::thread t2(lkgrd::print, '#');
    t1.join(); t2.join();
}