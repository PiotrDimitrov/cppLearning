#include "topics.h"
#include <iostream>
#include <mutex>
#include <thread>

namespace nqlck{
    std::mutex mtx;
    void print (char c)
    {
        std::unique_lock<std::mutex> ul(mtx, std::defer_lock); //defer lock means mutex will not be locked at start

        std::this_thread::sleep_for(std::chrono::seconds(3));

        ul.lock(); //now we lock it manually

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                std::cout << c;
                std::this_thread::sleep_for(std::chrono::milliseconds(150));
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;

        ul.unlock(); //we can unlock it manually
        //we can forget to unlock it< but program will not break
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }
}


//lock guard picks up all the code into a mutex
//to move only a part of code into a mutex we will use unique_lock

void uniqueLock() {
    std::thread t1 (nqlck::print('c'));
}