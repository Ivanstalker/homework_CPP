#include <iostream>

using namespace std;

int main() {
    int chose;
    cout << "enter number of tasks: ";
    cin >> chose;

    if (chose == 1) {
        //3.  ����� �ணࠬ��, ����� ��।����, ���� �� �������� ᨬ��� ���᭮� ��� ᮣ��᭮� �㪢�� (� ������᪮� ��䠢��).
        char symbol;
        cout << "enter the  letter: ";
        cin >> symbol;

        if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u' || symbol == 'y') {
            cout << "this letter was  vowel" << endl;
        } else if (symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'f' || symbol == 'g' || symbol == 'h' ||
                   symbol == 'j' || symbol == 'k' || symbol == 'l'
                   || symbol == 'm' || symbol == 'n' || symbol == 'p' || symbol == 'q' || symbol == 'r' || symbol == 's'
                   || symbol == 't' || symbol == 'v' || symbol == 'w'
                   || symbol == 'x' || symbol == 'y' || symbol == 'z') {
            cout << "this letter was  consonant" << endl;
        } else {
            cout << "this not letter! " << endl;
        }
    }
    if (chose == 2) {
        //4.  ����� �ணࠬ��, ����� �ᯮ���� �ୠ�� ������ ��� ��।������ �⭮�� ���������� �᫠.
        int number;
        cout << "������ �᫮: ";
        cin >> number;
        string message = (number % 2 == 0) ? "�᫮ �⭮�" : "�᫮ ���⭮�";
        cout << message << endl;
    }
    if (chose == 3) {
        // 5.  ����� �ணࠬ��, ����� ������� ������ ��⥬� ���ਧ�樨.
        int age;
        string name, surname, phone, password;
        cout << "������ ᢮� ���: ";
        cin >> name;
        cout << "������ 䠬����: ";
        cin >> surname;
        cout << "������ ������: ";
        cin >> age;
        cout << "������ ����� ⥫�䮭�: ";
        cin >> phone;
        cout << "�ਤ㬠�� ��஫�: ";
        cin>> password;
        string e_password;
        cout << "\n ������ ��஫�: ";
        cin >> e_password;
        while (e_password != password ) {
            cout << "������ ��஫�!!";
            cout << "\n ������ ��஫�: ";
            cin >> e_password;
        }
        if (e_password == password) cout << "��� �����: \n" << "  ��� 䠬����: " << name << " " << surname << "\n" << "  ������: " << age << "\n" << "  ����� ⥫�䮭�: " << phone << endl;
    }

    cin >> chose;
}
