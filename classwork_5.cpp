// �஢�ઠ ⥪��
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;


int main() {
    cout << "������ ⥪�� ��� �஢�ન: ";
    string text;
    getline(cin, text);
    int spaces_count = 0, capital = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            spaces_count++;
        }
        if (tolower(text[i]) == 'a' ||
            tolower(text[i]) == 'e' ||
            tolower(text[i]) == 'i' ||
            tolower(text[i]) == 'o' ||
            tolower(text[i]) == 'u' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�' ||
            tolower(text[i]) == '�') {
            capital++;
        }

    }
    cout << "���-�� ᨬ�����: " << text.length() << endl;
    cout << "���-�� �஡����: " << spaces_count << endl;
    cout << "���-�� ������ �㪢: " << capital;

    int f;
    cin >> f;
}