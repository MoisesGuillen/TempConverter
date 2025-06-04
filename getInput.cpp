#include <iostream>
#include "getInput.h"

double getInput() {
    std::cout << "Enter your city's temperature (°F): ";
    double temp{};
    std::cin >> temp;
    return temp;
}


