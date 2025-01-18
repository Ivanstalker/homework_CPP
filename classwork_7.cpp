#include <iostream>

using namespace std;

int main() {
    int task;
    cout << "Enter the number of tasks: ";
    cin >> task;

    if (task == 1) {
    // ������ �ணࠬ��, ����� �ᯮ���� �� ��⠢�� ������� ��ᢠ������
        int a{1}, b{1}, c{1};
        a += 1;
        b -= 1;
        c *= 1;
        cout << a << "  " << b << "  " << c << endl;
        a /= 1;
        b %= 1;
        c <<= 1;
        cout << a << "  " << b << "  " << c << endl;
        a >>= 1;
        b &= 1;
        c |= 1;
        cout << a << "  " << b << "  " << c << endl;
        a ^= 1;
        cout << a << endl;
    }
    if (task == 2) {
      //  2.	����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��砫쭮� ���祭�� � ��⥬ ��᪮�쪮 ࠧ ������� ��� � ������� ࠧ��� ��⠢��� �����஢ ��ᢠ������.
        int a;
        cout << "������ �᫮: ";
        cin >> a;

        a += 100;
        cout << a << " --> " ;
        a *= 1000;
        cout << a << " --> " ;
        a &= 12;
        cout << a << " --> " ;
        a %= 134;
        cout << a << " --> " ;
        a <<= 345;
        cout << a << " --> " ;
        a /= 100;
        cout << a << endl;
    }

    if (task == 3) {
       //1.	����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��� �᫠ � �஢����, ࠢ�� �� ���, � ����� �� ��� �����.
        int number_1, number_2;
        cout << "������ ��� �᫠: " << endl;
        cin >> number_1 >> number_2;

        if (number_1 == number_2) {
            cout << "����� �᫠ ࠢ��" << endl;
        }

        if (number_1 != number_2) {
            if (number_1 > number_2) {
                cout << "�᫮ " << number_1 << " ����� 祬 �᫮ " << number_2 << endl;
            }
            if (number_2 > number_1) {
                cout << "�᫮ " << number_2 << " ����� 祬 �᫮ " << number_1 << endl;
            }
        }
    }

    if (task == 4) {
        //2.����� �ணࠬ��, ����� ��।����, ���� �� ��������� �᫮ ������⥫��, ����⥫�� ��� �㫥�.
        int number;
        cout << "������ �᫮: " ;
        cin >> number;

        if (number < 0) {
            cout << "������ �᫮ ���� ����⥫��" << endl;
        }
        if (number == 0) {
            cout << "�᫮ ࠢ�� 0" << endl;
        }
        if (number > 0) {
            cout << "�᫮ ���� ������⥫��" << endl;
        }
    }
    if (task == 5) {
        //3. ����� �ணࠬ��, ����� ��।����, ���� �� �������� ��� ��᮪���. (��� ���� ��᮪���, �᫨ �� ������� �� 4, �� �� ������� �� 100, ���� ������� �� 400.)
        int year;
        cout << "������ ���: ";
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            cout << year << " ��� . ��᮪���!" << endl;
        }
        else {
            cout << year << " ��� �� ��᮪���!" << endl;
        }
    }

    if (task == 6) {
        //4. ����� �ணࠬ��, ����� ��।����, �������� �� ��������� �᫮ � ������� �������� (���ਬ��, �� 10 �� 100).
        int number;
        cout << "������ �᫮: ";
        cin >> number;
        if (number >= 10 && number <= 100) cout << "�᫮ � ���������" << endl;

        else cout << "�᫮ �� � ���������!" << endl;
    }

    if (task == 7) {
        //1. ����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� �᫮ � �஢����, ���� �� ��� ������⥫��, ����⥫�� ��� �㫥�. �ᯮ��� ������� if-else if-else.
        int number;
        cout << "������ �᫮: ";
        cin >> number;

        if (number < 0) cout << "�᫮ ����⥫쭮�";
        if (number == 0) cout << "�᫮ ࠢ�� 0";
        else cout << "�᫮ ������⥫쭮�";
    }

    if (task == 8) {
        //2.	����� �ணࠬ��, ����� ��।���� ���ᨬ��쭮� �� ��� ��������� �ᥫ. �ᯮ��� �������� if-else.
        int num_1, num_2, num_3;
        cout << "������ 3 �᫠:" << endl;
        cin >> num_1 >> num_2 >> num_3;

        if (num_1 == num_2 && num_1 == num_3) cout << "�� �᫠ ࠢ��" << endl;
        else if (num_1 > num_2 && num_1 > num_3) cout << "ᠬ�� ����讥 �᫮: " << num_1 << endl;
        else if (num_2 > num_1 && num_2 > num_3) cout << "ᠬ�� ����讥 �᫮: " << num_2 << endl;
        else if (num_3 > num_2 && num_3 > num_1) cout << "ᠬ�� ����讥 �᫮: " << num_3 << endl;
    }

    else {
        cout << "innocorect number of tasks!!" << endl;
    }
    cin >> task;
}