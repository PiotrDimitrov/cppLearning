#include "topics.h"
#include <iostream>
#include <thread>
#include <mutex>

namespace ddlck{
    std::mutex mtx1; std::mutex mtx2;

    void print1()
    {
        mtx2.lock();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mtx1.lock();
        if (mtx1.try_lock()){mtx1.lock();}

        for (int i = 0 ; i < 4; ++i)
        {
            for (int i = 0; i < 10; i++)
            {
                std::cout << '*';
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        mtx1.unlock();
        mtx2.unlock();
    }

    void print2()
    {
        mtx1.lock();

        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mtx2.lock();

        for (int i = 0 ; i < 4; ++i)
        {
            for (int i = 0; i < 10; i++)
            {
                std::cout << '@';
                std::this_thread::sleep_for(std::chrono::milliseconds(20));
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
        mtx2.unlock();

        mtx1.unlock();
    }
}
// using two mutex we can sometimes obtain DEADLOCK problem

// it happens here as "print1" and "print2" lock "mtx1" and "mtx2" in different order, so when "print1"
// goes through "mtx2" it reaches "mtx1" which is already locked by "print2" (in other thread "t2").
// on the other hand "print2" will never unlock "mtx1" as "mtx2" was already locked by "print1" and it waits
// "print2" to finish.

//to fix it we need to use mtx1 and mtx2 in the same order

//we can also try to use "if (mtx1.try_lock()){mtx1.lock();}" such constructions but is not a good solution as
// it can lead to deadlock

void deadlock() {
    std::thread t1 (ddlck::print1);
    std::thread t2 (ddlck::print2);

    t1.join(); t2.join();
}