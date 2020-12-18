#include <chrono>
#include <iostream>
#include <thread>

void wait()
{
	std::cout << "Press ENTER to continue...";
	std::cin.get();
	std::cin.ignore();
}

void sleep(const int wait_time)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(wait_time));
}