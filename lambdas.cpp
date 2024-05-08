#include "topics.h"
#include <iostream>
#include <vector>
#include <functional>

namespace lam {
    void doWork(std::vector<int> &v, std::function<void(int)> f)
    {
        for (auto e : v){  f(e); }
    }
}

void lambdas() {
    //[](){}; //lambda syntax
    std::vector<int> vec = {1, 2, 3, 4, 5};

// long way
    std::cout << "vector:\n";
    std::function<void(int)> f;
    f = [](int a)
    {
        std::cout << ++a << std::endl;
    };
    lam::doWork(vec, f);

//short way
    std::cout << "vector:\n";
    lam::doWork(vec, [](int a){std::cout << ++a << std::endl;});


    //[](){}; lambda syntax
    // () - capture list of parameters
    // {} - body of the function
    // [] - capture list of outside var-s to make them visible to lambda

    int p = 0;

    auto b = [&p]()
    {
        p = 5;
    };
    b();
    std::cout << "p = " << p << std::endl;
    return 0;
}