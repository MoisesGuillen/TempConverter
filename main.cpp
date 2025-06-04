#include <iostream>
#include "convertTemp.h"
#include "getInput.h"

int main() {
    double x { getInput() };
    std::cout << "Equivalent temperature: " << convertTemp(x) << " (°C)\n";
    return 0;
}

