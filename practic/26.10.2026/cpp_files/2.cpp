#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    if (b == 0) return 0;
    std::cout << static_cast<long long>(a) / b << "\n";
    std::cout << static_cast<double>(a) / b << "\n";
    return 0;
}
