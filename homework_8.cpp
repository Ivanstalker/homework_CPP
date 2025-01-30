#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(NULL));
    //    5.  Напиши программу, которая перебирает элементы массива и выводит только четные числа, используя цикл for-each.
    int mass[10];
    for (int i = 0; i < 10; i++) {
        mass[i] = rand() % 100;
    }
    for (const auto i: mass) {
        cout << i << ' ';
    }
    cout << endl;
    for (const auto i: mass) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
    cout << endl;
    cout << endl;
    // 6.  Напиши программу, которая выводит на экран "ёлочку" из символов, используя вложенные циклы for.(build by chat gpt)
    int height; // Высота ёлочки
    cout << "введите размер ёлочки: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        // Вывод пробелов для выравнивания
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }
        // Вывод звездочек
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl; // Перевод строки
    }

    // 7.  Напиши бесконечный цикл с выходом по условию.
    cout << endl;
    int password = 1898;
    while (true) {
        int password_e;
        cout << "Enter your password: ";
        cin >> password_e;
        if (password_e == password) {
            cout << "Your password is correct!" << endl;
            break;
        } else cout << "Wrong password!" << endl;
    }
    cin >> password;
}
