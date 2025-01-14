/*2. ������� ��⮢ �᫠

���ᠭ��: ������� �ணࠬ��, ����� ����訢��� � ���짮��⥫� 楫�� �᫮ � �뢮��� ������஢����� �᫮, � ⠪�� ��� ����筮� �।�⠢����� �� � ��᫥ �����ᨨ.

�ॡ������:

����� �����: ������� � ���짮��⥫� 楫�� �᫮ (⨯� int).

�뢮� �ਣ�����: �뢥�� ��室��� �᫮ � �����筮� �ଠ�.

������� ��⮢: �ਬ����� ��ࠧ�來� ������ �� (~) � ���������� ���.

�뢮� ������஢������ �᫠: �뢥�� ������஢����� �᫮ � �����筮� �ଠ�.

�뢮� ����筮�� �।�⠢�����: �뢥�� ����筮� �।�⠢����� ��室���� � ������஢������ �᫠.

����� �ᯮ�짮���� std::bitset<32>, ��� 32 �� ������⢮ ��� � ⨯� int. (��������� #include <bitset>).*/
#include <iostream>
#include <bitset>

using namespace std;

string to_binary(int n_int) {
    string n_binary{};
    for (int i = n_int; i > 0; i /= 2) {
        n_binary = to_string(i % 2) + n_binary;
    }
    return n_binary;
}

int main() {
    int number;
    cout << "������ �᫮: ";
    cin >> number;
    cout << to_binary(number) << endl;
    cout << (~number) << endl;

    cin >> number;
}