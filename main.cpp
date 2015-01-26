#include <iostream>

#include "Timer.hpp"

int main(int , char const**)
{
    Timer< > timer_milli;
    timer_milli.sleep(1000);
    std::cout << "default: " << timer_milli.elapsed() << std::endl;

    Timer<std::chrono::microseconds> timer_micro;
    timer_micro.sleep(1000000);
    std::cout << "micro: " << timer_micro.elapsed() << std::endl;

    Timer<std::chrono::seconds> timer_sec;
    timer_sec.sleep(1);
    std::cout << "seconds: " << timer_sec.elapsed() << std::endl;

    return 0;
}
