#include <iostream>

using namespace std;
int main() {
    while (true) {
    double cost{}, sale;
        double a = 100;
        cout << "������ �⮨����� ⮢��: ";
        cin >> cost;
        if (cost > 0) {
            cout << "������ ᪨��� �� ⮢��(� ��業��): ";
            cin >> sale;

            if (sale > 0) {
                cout << cout.precision(2) << fixed << "\n�⮣���� �⮨�����: " << cost - cost * sale / 100 << endl;
            }

            else {
                cout << "�訡��: ᪨��� �� ����� ���� ����⥫쭮�!";
            }
        }

        else {
            cout << "�訡��: �⮨����� �� ����� ���� ����⥫쭮�!";
        }

        cin >> sale;
    }
}