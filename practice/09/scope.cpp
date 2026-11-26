#include <iostream>
using namespace std;

int globalValue = 100;
int localNext() {
    int count = 0;
    return ++count;
}
int persistentNext() {
    static int count = 0;
    return ++count;
}
int main() {
    cout << "--- область видимости ---\n";
    int localValue = 20;
    {
        int innerValue = 5;
        cout << "вложенный блок: " << innerValue << '\n';
    }
    cout << "локальная переменная: " << localValue << '\n';
    cout << "глобальная переменная: " << ::globalValue << '\n';
    cout << "--- счетчики ---\n";
    for (int i = 1; i <= 3; i++) {
        int a = localNext();
        int b = persistentNext();
        cout << "вызов " << i << ": local=" << a << ", static=" << b << '\n';
    }
}
