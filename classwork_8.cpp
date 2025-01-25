#include <iostream>
#include <vector>

using namespace std;

int main() {
    int task;
    cout << "enter the number of tasks: ";
    cin >> task;


    switch (task) {
        case 1: {
            //1. ����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� ����� ����� � �뢮��� �������� �����
            int month;
            string months;
            cout << "������ ����� �����: ";
            cin >> month;

            switch (month) {
                case 1:
                    months = "January";
                break;
                case 2:
                    months = "February";
                break;
                case 3:
                    months = "March";
                break;
                case 4:
                    months = "April";
                break;
                case 5:
                    months = "May";
                break;
                case 6:
                    months = "June";
                break;
                case 7:
                    months = "July";
                break;
                case 8:
                    months = "August";
                break;
                case 9:
                    months = "September";
                break;
                case 10:
                    months = "October";
                break;
                case 11:
                    months = "November";
                break;
                case 12:
                    months = "December";
                break;

                default:
                    cout << "invalid input !";
            }
            cout << months << endl;
            break;
        }
        case 2: {
            //2.	����� �ணࠬ��, ����� ������� ���⮩ ��������. ���짮��⥫� ������ ��� �᫠ � ᨬ���
            //����樨 (���ਬ��, +, -, *, /), � �ணࠬ�� �뢮��� १����.
            int number_1, number_2;
            char symbol;
            cout << "������ ��� �᫠ � ������(+ - * /): " << endl;
            cin >> number_1 >> number_2 >> symbol;

            switch (symbol) {
                case '+':
                    cout << number_1 << " + " << number_2 << " = "  <<   number_1 + number_2 << endl;
                break;
                case '-':
                    cout << number_1 << " - " << number_2 << " = " <<   number_1 - number_2 << endl;
                break;
                case '*':
                    cout << number_1 << " * " << number_2 << " = " <<   number_1 * number_2 << endl;
                break;
                case '/':
                    cout << number_1 << " / " << number_2 << " = " <<   number_1/number_2 << endl;
                break;

                default:
                    cout << "invalid input !";
            }
            break;
        }
        case 3: {
            //3.����� �ணࠬ��, ����� �८�ࠧ�� �業�� � ���� �㪢� (A, B, C, D, F) � �� ᫮��᭮� ���ᠭ��
            //(���ਬ��, "�⫨筮", "���" � �.�.).
            char grade;
            cout << "������ �⬥��(A , B , C , D , F): ";
            cin >> grade;

            switch (grade) {
                case 'A':
                    cout << "�⫨筮";
                break;
                case 'B':
                    cout << "����";
                break;
                case 'C':
                    cout << "��ଠ�쭮";
                break;
                case 'D':
                    cout << "������⢮�⥫쭮";
                break;
                case 'F':
                    cout << "��㤮���⢮�⥫쭮";
                break;

                default:
                    cout << "invalid input !";
            }
            break;
        }
        case 4: {
            // 1.	����� �ணࠬ��, ����� �뢮��� �� �᫠ �� 1 �� 100, �ᯮ���� 横�� while � for.
            int i = 1;
            while (i <= 100) {
                cout << i << " ";
                i++;
            }
            cout << endl << endl;
            for (int i = 1; i <= 100; i++) {
                cout << i << " ";
            }
        }
        case 5: {
            // 2.	����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� �᫮ � �뢮��� ⠡���� 㬭������ ��� �⮣� �᫠.
            int number;
            cout << "������ �᫮: ";
            cin >> number;
            cout << endl;

            for (int i = 1 ; i <= 10; i++) {
                cout << number << " * " << i << " = " << number * i << endl;
            }
            break;
        }
        case 6: {
            // 3.	����� �ணࠬ��, ����� ������ 䠪�ਠ� ���������� �᫠ � ������� 横�� for.
            int number, num;
            cout << "������ �᫮: ";
            cin >> number;
            int factorial = 1;
            for (int i = 1 ; i <= number; i++) {
                factorial *= i;
            }
            cout << "䠪�ਠ� �᫠: " << factorial << endl;
            break;
        }
        case 7: {
            // 4.	����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� �᫠ � �㬬���� �� �� �� ���, ���� ���짮��⥫� �� ������ 0. �ᯮ��� 横� do...while.
            int number, sum = 0;


            do {
                cout << "������ �᫠ ��� �㬬�஢����(��� ��⠭���� ������ 0): ";
                cin >> number;
                sum += number;
            }while (number != 0);
            cout << sum << endl;
            break;
        }
        case 8: {
            // 5.	����� �ணࠬ��, ����� ��ॡ�ࠥ� ������ ���ᨢ� � �뢮��� ⮫쪮 ��� �᫠, �ᯮ���� 横� for-each.
            int num[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
            for (int i : num) {
                i % 2 == 0 ? cout << i << " " : cout;
            }
            break;
        }
        case 9: {
            // 6.	����� �ணࠬ��, ����� �뢮��� �� �࠭ "���" �� ᨬ�����, �ᯮ���� �������� 横�� for.

        }
        case 10: {
            // 7.	����� ��᪮���� 横� � ��室�� �� �᫮���.
            while (true) {
                cout << "������ ��஫�: ";
                int password = 1898;
                int e_password;
                cin >> e_password;
                if (e_password == password) {
                    break;
                }
                else {
                    cout << "������ ��஫� !" << endl;
                }
            }
        }



    }

    cin >> task;
    return 0;
}
