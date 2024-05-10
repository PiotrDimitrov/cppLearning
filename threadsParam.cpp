#include "topics.h"
#include <iostream>
#include <thread>
#include <chrono>

namespace thdpmt{
    void doWork(int a, int b) //emulation of a long running process
    {
        for (int i = 0; i < 6; i++)
        {
            std::cout << "thread id: " << std::this_thread::get_id() << "\tcounting\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
        }
        std::cout << "RESULT " << a + b << std::endl;
        return;
    }
}


void threadsParam() {

    //doWork(2, 3); //this will stop main program for 3-4 seconds

    std::thread t1(thdpmt::doWork, 2, 3); //this doesn't stop main program

    for (int i = 0; i < 50; i++) //emulation of continue of main program
    {
        std::cout << "thread id: " << std::this_thread::get_id() << "\tmain\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    t1.join();
}