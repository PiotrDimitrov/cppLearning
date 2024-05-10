#include "topics.h"
#include <iostream>
#include <thread>
#include <chrono>

//we'll use:

//std::this_thread::sleep_for(std::chrono::milliseconds(500));
//sleep for 3 sec, use to imulate some program work

//std::cout << std::this_thread::get_id() << std::endl;
//thread id, used to identify threads and not confuse them

namespace thrd{
    void doWork() {
    for (int i = 0; i < 5; i++)
    {
        std::cout << "thread id: " << std::this_thread::get_id() << "\tdoWork\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(750));
    }
    return;
    }
}

void multiThreading() {
    std::cout << "start main" << std::endl;

    std::thread th(thrd::doWork); //make a thread for parallel work
    //th.detach();  //doesn't fit here

    for (int i = 0; i < 5; i++)
    {
        std::cout << "thread id: " << std::this_thread::get_id() << "\tmain\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }

    th.join(); //wait for thread to finish
    std::cout << "end main" << std::endl;

}
