#include <iostream>

int main() {
    int i = 10;
    int a = i++;
    int b = ++i;
    std::cout << a << " " << b << " " << i << "\n";
    for (int j = 0; j < 3; j++) {
        std::cout << j << " ";
    }
    std::cout << "\n";
    for (int j = 0; j < 3; ++j) {
        std::cout << j << " ";
    }
    std::cout << "\n";
    return 0;
}
