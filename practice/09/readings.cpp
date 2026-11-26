#include <iostream>
using namespace std;

void printValue(int x) { cout << "Count: " << x << '\n'; }
void printValue(double x) { cout << "Reading: " << x << '\n'; }
void printValue(bool x) { cout << "Running: " << boolalpha << x << '\n'; }

int main() {
    int count, state;
    double reading;
    cout << "количество: ";
    cin >> count;
    cout << "показание: ";
    cin >> reading;
    cout << "состояние (0/1): ";
    cin >> state;
    bool running = state == 1;
    printValue(count);
    printValue(reading);
    printValue(running);
    printValue(1);
    printValue(1.0);
    printValue(true);
}
