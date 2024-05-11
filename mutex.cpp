#include <iostream>
#include <thread>
#include <mutex>
#include "topics.h"

namespace mt{
    std::mutex mtx;
//mutex is a locking mechanism that allows only one thread at a time to access a shared resource

    void print(char c)
    {
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

    void printMtx(char c)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        mtx.lock();
        //mtx.lock() is a function that locks the mutex. If the mutex is already locked by another thread, the current thread will be blocked until the mutex is unlocked by another thread.
        //that means that when first thread reaches this point, next threads will wait until the first thread unlocks the mutex by reaching mtx.unlock();

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

        mtx.unlock();

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void mutex() {
    //case 1: without threads
    //print('*');
    //print('#');

    //case 2: with threads
    //incorect output without mutex
    //std::thread t1(print, '*');
    //std::thread t2(print, '#');

    //case 3: with mutex
    //correct output with mutex
    std::thread t1(mt::printMtx, '*');
    std::thread t2(mt::printMtx, '#');

    t1.join(); t2.join();
}