#include <iostream>
#include <random>

using namespace std;

int main() {
    srand(time(NULL));
    /*
    1.  ������� ���ᨢ �� 5 ������⮢ ⨯� int.
    2.  ������� 㪠��⥫� ptr, ����� 㪠�뢠�� �� ���� ������� ���ᨢ�.
    3.  �ᯮ���� ��䬥⨪� 㪠��⥫��, �⮡� �뢥�� ����� ������� ���ᨢ� �१ ࠧ묥������� 㪠��⥫�.

    int mass[] = {10, 20, 30, 40, 50};
    int *ptr = mass;
    for (int i = 0; i < 5; i++) {
        cout << *ptr << endl;
        ptr++;
    }*/

    /*����� 2: ���६��� � ���६��� 㪠��⥫�
    ������ �ணࠬ��, �����:
    1.  ������� ���ᨢ �� 4 ������⮢.
    2.  �ᯮ���� 㪠��⥫� ptr ��� ��६�饭�� �� ���ᨢ� � ������� ����権 ���६��� (ptr++) � ���६��� (ptr--).
    3.  �뢮��� �������� ���ᨢ� � ��אַ� � ���⭮� ���浪�.


    int mass[] = {1, 3, 5, 7};
    int *ptr = mass;
    cout << "�᫠ � ��אַ� ���浪�: ";
    for (auto i : mass) {
        cout << *ptr << ' ';
        ptr++;
    }
    cout << endl;
    cout << "�᫠ � ���⭮� ���浪�: ";
    ptr--;
    for (auto i : mass) {
        cout << *ptr << ' ';
        ptr--;
    } */

     // ����� 3: ���᫥��� ����ﭨ� ����� 㪠��⥫ﬨ
     // ������ �ணࠬ��, �����:
     // 1.  ������� ���ᨢ �� 6 ������⮢.
     // 2.  ������� ��� 㪠��⥫�: ptr1, 㪠�뢠�騩 �� ���� ������� ���ᨢ�, � ptr2, 㪠�뢠�騩 �� ��᫥���� ������� ���ᨢ�.
     // 3.  ������ ����ﭨ� ����� 㪠��⥫ﬨ � �뢮��� ���.

     /*int mass[] = {2, 4, 6, 8, 10, 12};
     int *ptr1 = mass;
     int *ptr2 = mass + 5;
     int a = *ptr2 - *ptr1;
     for (auto i : mass) {
         cout << *ptr1 << ' ';
         ptr1++;
     }
     cout << "���ﭨ� ����� ��᫥���� � ���� ������⮬: " << a << endl;
     ptr1 = mass;
    for (int i = 0; i < 7; i++) {
        cout << *ptr1 << ' ';
        ptr1++;
    }
*/

    /*����� 5: ��䬥⨪� 㪠��⥫�� � �������᪨� ���ᨢ��
    ������ �ணࠬ��, �����:
    1.  �������᪨ �뤥��� ������ ��� ���ᨢ� �� 5 ������⮢ � �ᯮ�짮������ new.
    2.  �������� ���ᨢ ���祭�ﬨ � ������� 㪠��⥫�.
    3.  �뢮��� �������� ���ᨢ� �१ ��䬥⨪� 㪠��⥫��.
    4.  �᢮������� ������ � ������� delete[]

    int mass[5];
    int *ptr = mass;
    for (int i = 0; i < 5; i++) {
        mass[i] = rand() % 10;
    }
    for (auto i : mass) {
        cout << *ptr << ' ';
        ptr++;
    }*/

    /*����� 6: ��ॡ�� ���ᨢ� � �ᯮ�짮������ 㪠��⥫��
    ������ �ணࠬ��, �����:
    1.  ������� ���ᨢ �� 7 ������⮢.
    2.  �ᯮ���� 㪠��⥫� ptr ��� ����㯠 � ������⠬ ���ᨢ�, �� �ᯮ���� ������஢���� ���ᨢ� (⮫쪮 ��䬥⨪� 㪠��⥫��).
    3.  ��室�� ���ᨬ���� ������� ���ᨢ� � ������� 㪠��⥫�.

    int mass[] = {1, 2, -12, 99, 5, 6, 7};
    auto *ptr = mass;
    auto n = sizeof(mass) / sizeof(mass[0]);
    int max = INT16_MIN;
    for (int &i : mass) {
        if (i >= max) {
            max = i;
        }
    }
    cout << endl;
    cout << "���ᨬ���� ������� ��ᨢ�: " << max << endl;*/

    int aa;
    cin >> aa;
    return 0;
}