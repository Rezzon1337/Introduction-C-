#include <iostream>
#include <cmath>

bool almostEqual(double a, double b) {
    return std::fabs(a - b) < 1e-9;
}

int main() {
    double a = 0.1 + 0.2;
    double b = 0.3;
    std::cout << std::boolalpha << (a == b) << "\n";
    std::cout << almostEqual(a, b) << "\n";
    return 0;
}
