#include <iostream>

int main() {
    int big = 1000;
    char small = big;
    std::cout << static_cast<int>(small) << "\n";
    return 0;
}
