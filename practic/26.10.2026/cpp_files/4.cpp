#include <iostream>

int main() {
    int a = -1;
    unsigned int b = 1;
    if (a < b) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    if (a < static_cast<int>(b)) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }
    return 0;
}
