#include <iostream>

using namespace std;
int main() {
    while (true) {
    double cost{}, sale;
        double a = 100;
        cout << "введите стоимость товара: ";
        cin >> cost;
        if (cost > 0) {
            cout << "введите скидку на товар(в процентах): ";
            cin >> sale;

            if (sale > 0) {
                cout << cout.precision(2) << fixed << "\nитоговая стоимость: " << cost - cost * sale / 100 << endl;
            }

            else {
                cout << "ошибка: скидка не может быть отрицательной!";
            }
        }

        else {
            cout << "ошибка: стоимость не может быть отрицательной!";
        }

        cin >> sale;
    }
}