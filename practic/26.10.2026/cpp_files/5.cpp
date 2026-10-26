#include <iostream>
#include <string>
#include <limits>

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string line;
    std::getline(std::cin, line);
    std::cout << n << "\n" << line << "\n";
    return 0;
}
