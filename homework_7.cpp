

//7.  Напиши бесконечный цикл с выходом по условию.

#include <iostream>
#include <random>

using namespace std;

int main() {
    srand(time(NULL));
    //  Напиши программу, которая перебирает элементы массива и выводит только четные числа, используя цикл for-each.
    int mass[10];
    for (int i = 0; i < 10; i++) {
        mass[i] = rand() % 10;
    }
    for (int i : mass) {
        if (mass[i] % 2 == 0) {
            cout << mass[i] << " ";
        }
        else {
            continue;
        }
    }
    //6.  Напиши программу, которая выводит на экран "ёлочку" из символов, используя вложенные циклы for.


    int mas;
    cin >> mas;
    return 0;
}