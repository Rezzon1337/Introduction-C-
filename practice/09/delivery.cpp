#include <iostream>
using namespace std;
namespace delivery {
    int cost(int count, int rate) {
        if (count < 1 || count > 20 || rate < 1 || rate > 500) return -1;
        return count * rate;
    }
    int cost(int count) { return cost(count, 50); }
}
int main() {
    int mode, count, rate, result;
    cout << "--- стоимость доставки ---\n";
    cout << "1 - стандартный тариф | 2 - индивидуальный\nРежим: ";
    cin >> mode;
    if (mode != 1 && mode != 2) {
        cout << "Неизвестный режим\n";
        return 0;
    }
    cout << "количество посылок: ";
    cin >> count;
    if (mode == 1) result = delivery::cost(count);
    else {
        cout << "тариф: ";
        cin >> rate;
        result = delivery::cost(count, rate);
    }
    if (result == -1) cout << "неверные данные\n";
    else cout << "стоимость: " << result << " руб.\n";
}
