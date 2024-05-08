#include "topics.h"
#include <iostream>
#include <functional>
#include <vector>

namespace fnc {

    void func1(int a)
    {
        if (a > 10 && a < 40) { std::cout << a << std::endl; }
    }

    void func2(int a)
    {
        if (a % 2 == 0) { std::cout << a << std::endl; }
    }

    void dowork(std::vector<int> &v, std::function<void(int)> f)
    {
        for (auto el : v) { f(el); }
    }

    void msg1(){std::cout << "message 1\n";}
    void msg2(){std::cout << "message 2\n";}
    void msg3(){std::cout << "message 3\n";}
    void msg4(){std::cout << "message 4\n";}
    void msg5(){std::cout << "message 5\n";}

    void printFunctions(std::vector<std::function<void()>> &funcs)
    {
        for (auto f : funcs) { f(); }
    }
}

void stdFunction() {
    std::vector<int> vec = {3, 4, 6, 7, 11, 12, 14, 17, 20, 21, 42, 45};
    fnc::dowork(vec, fnc::func1);
    fnc::dowork(vec, fnc::func2);

    std::vector<std::function<void()>> vec2 = {fnc::msg1, fnc::msg2, fnc::msg5};
    fnc::printFunctions(vec2);
}