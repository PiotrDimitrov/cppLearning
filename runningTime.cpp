#include <iostream>
#include <thread>
#include "topics.h"

namespace rtime{
    int working(long long l = 10000000)
    {
        int r = 0;
        for (long i = 0; i < l; ++i)
        {
            r += i;
        }
        return r;
    }

    int sum(int a, int b)
    {
        std::cout << "counting...\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        return a + b;
    }
}


void runningTime() {
    //timer st;
    auto start = std::chrono::high_resolution_clock::now();

    int result;
    std::thread t ([&result](){result = rtime::sum(2, 5);});

    for (int i = 1; i <= 6; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        std::cout << "main work emulation " << std::endl;
    }

    t.join();
    std::cout << "sum: " << result << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "duration: " << duration.count() << " seconds" << std::endl;
}