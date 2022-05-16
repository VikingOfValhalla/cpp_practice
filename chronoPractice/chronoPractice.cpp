#include <iostream>
#include <chrono>
#include <thread>

// sleep function to test
void funcSleep()
{
    std::this_thread::sleep_for(std::chrono::seconds (3));
}

int main ()
{
    // start clock
    auto startTime = std::chrono::steady_clock::now();
    
    // sleep function for testing
    funcSleep();
    
    // end clock
    auto endTime = std::chrono::steady_clock::now();

    // print time
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(endTime-startTime).count() << "\n";


    return 0;
}
