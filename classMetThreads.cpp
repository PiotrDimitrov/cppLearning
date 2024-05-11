#include "topics.h"
#include <iostream>
#include <thread>
#include <chrono>

namespace clmtth{
    class Calculator
    {
    private:
//int data = 0;
    public:
        int sum (int a, int b)
        {
            std::cout << "Calculating sum...\n";
            std::this_thread::sleep_for(std::chrono::seconds(4));
            return a + b;
        }
        void calculations(int a, int b)
        {
            std::cout << "Calculating...\n";
            std::this_thread::sleep_for(std::chrono::seconds(4));
            std::cout << "Result: " << a + b << "\n";
        }
        void printer()
        {
            std::cout << "Printing...\n";
            std::this_thread::sleep_for(std::chrono::seconds(4));
            std::cout << "Printed!\n";
        }
    };
}

void classMetThreads() {
    std::cout << "main started\n";

    clmtth::Calculator calc;

    //calc.calculations(2,3);
    //calc.printer();
    int result;
    std::thread t1([&result, &calc](){result = calc.sum(2,3);});

    //std::thread t2(&Calculator::calculations, &calc, 2, 3); // same

    std::thread t3(&clmtth::Calculator::printer, &calc);
    for (int i = 0; i < 5; i++)
    {
        std::cout << "working main: " << i+1 << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    t1.join();
    //t2.join();
    t3.join();
    std::cout << "main ended\n";
}
