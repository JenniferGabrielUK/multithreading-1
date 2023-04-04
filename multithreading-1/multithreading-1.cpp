// multithreading-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>
using namespace std::chrono_literals;

void function1(char symbol) {
    for (int i{ 0 }; i <= 200; ++i) {
        std::cout << symbol;
    }
}

void function2() {
    for (int i{ 0 }; i <= 200; ++i) {
        std::cout << "-";
    }
}

void RefreshForecast(std::map<std::string, int> forecastMap) {
    while (true) {
        for (auto& item : forecastMap) {
            item.second++;
            std::cout << item.first << " - " << item.second << std::endl;
        }
        std::this_thread::sleep_for(2000ms);
    }
}

int main()
{
 /*   std::cout << "Random Output: " << std::endl << std::endl;
    std::thread worker1(function1,'o');
    std::thread worker2(function2);
    std::cout << std::endl;*/

    std::map<std::string, int> forecastMap = {
        {"New York", 15},
        {"Florida", 23},
        {"Mumba", 20},
        {"Berlin", 16}
    };

    std::thread backgroundWorker(RefreshForecast, forecastMap);

    system("pause>nul");
}