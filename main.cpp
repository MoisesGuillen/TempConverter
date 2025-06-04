#include <iostream>
#include "convertTemp.h"
#include "getInput.h"

int main() {
    std::cout << "-------------------------------------------\n";
    std::cout << "          TEMPERATURE CONVERTER    v1.0        \n";
    std::cout << "-------------------------------------------\n";
    double x { getInput() };
    std::cout << "Equivalent temperature: " << convertTemp(x) << " (°C)\n";
    return 0;
}

