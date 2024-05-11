#include "topics.h"
#include <iostream>
#include <thread>
#include <mutex>

namespace rcvmx{
    std::recursive_mutex rmtx;

    void foo(int x)
    {
        rmtx.lock();
        std::cout << x << " ";
        std::this_thread::sleep_for(std::chrono::microseconds(200));
        if (x <= 1)
        {
            std::cout << std::endl;
            rmtx.unlock();
            return;
        } else {
            x--;
            foo(x);
            rmtx.unlock();
        }
    }
}

//simple mutex will not work here as it cannot be locked more than once
//recursive mutex must be unlocked as many times as it was locked

void recursiveMutex() {
    std::thread t1 (rcvmx::foo, 10);
    std::thread t2 (rcvmx::foo, 10);

    t1.join(); t2.join();
}