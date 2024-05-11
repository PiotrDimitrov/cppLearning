#include <iostream>
#include <thread>
#include <chrono>
#include "topics.h"

namespace lmthd{
    int sum(int a, int b)
    {
        std::cout << "counting...\n";
        std::this_thread::sleep_for(std::chrono::seconds(2));
        return a + b;
    }
}

void lambdaThread() {
    int result;
    //result = sum(2, 5);
    //std::thread t(sum, 2, 5);
    std::thread t ([&result](){result = lmthd::sum(2, 5);});
    //one of the ways to asign result from thread to a variable
    for (int i = 1; i <= 6; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(700));
        std::cout << "main work emulation " << std::endl;
    }
    t.join();
    std::cout << "sum: " << result << std::endl;
}