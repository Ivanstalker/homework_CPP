#include <iostream>
#include <string.h>


using namespace std;

void ptr_x2(int *num) {
    *num *= 2;
}
void replace(int *num_1, int *num_2) {
    int twice = *num_1;
    *num_1 = *num_2;
    *num_2 = twice;
}

int main() {
    // 1.	���� ���ᨢ ᨬ����� � ���樠������� ��� ��ப�� "Programming".
    /*char array_1[] = "Programing";
    // 2.	�뢥��� ����� ᨬ��� ���ᨢ� �� �࠭.
    for (char i : array_1) {
        cout << i ;
    }
    cout << endl;
    // 3.	���� ��㬥�� ���ᨢ ᨬ����� 3x10 � ���樠������� ��� �६� �������.
    char array_2[3][10] = {
        "Ivan",
        "Sanya",
        "Artem"};
    // 4.	�뢥��� �� ����� �� ��㬥୮�� ���ᨢ� �� �࠭
    for (const auto i : array_2) {
        cout << i << endl;
    }
    cout << endl;
    // 5.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��ப�, �뢮��� �� �� �࠭, � ��⥬ �뢮��� �� � ���⭮� ���浪�.
    cout << "������ ��ப�: ";
    char array_3[10]{};
    cin.getline (array_3, 10);
    int i = 9;
    while (i >= 0) {
        cout << array_3[i];
        i--;
    }
    cout << endl;
    // 6.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��᪮�쪮 ��ப, ��࠭�� �� � ��㬥୮� ���ᨢ�, � ��⥬ �뢮��� �� �� �࠭.
    char array4[10][10]{}; // ��㬥�� ���ᨢ
    int f = 0;

    while (f < 10) {
        cout << "Enter string (or a single space to stop): ";
        char s[10];
        cin.getline(s, 10); // ���뢠�� ��ப� � �஡�����
        // �஢��塞, �᫨ ��ப� ࠢ�� " " (�஡��), � ��⠭�������� ����
        if (strcmp(s, " ") == 0) {
            break;
        }
        // �����㥬 ��������� ��ப� � ��㬥�� ���ᨢ
        strcpy(array4[f], s);
        f++;
    }

    for (const auto& s : array4) {
        cout << s << endl;
    }

    // 7.	������� �ணࠬ��, ����� ����訢��� � ���짮��⥫� ⥪�� � ��室�� � �� ������⢮ ������ �㪢 (a, e, i, o, u).
    char array_5[32]{};
    int k = 0;
    cout << "enter the text: ";
    cin >> array_5;
    for (const auto & s : array_5) {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
            k += 1;
        }
    }
    cout << k << endl;
//     1.	���� ��ப� � ���樠������� �� ���祭��� "Hello, C++!".
    /*string name = "Hello, C++!";
// 2.	�뢥��� ����� �⮩ ��ப�.
    cout << "����� ��ப� = " << name.size() << endl;
// 3.	�뢥��� ���� � ��᫥���� ᨬ���� �⮩ ��ப�.
    int size_ = name.size();
    cout << "���� ᨬ��� = " << name.at(0) << endl;
    cout << "��᫥���� ᨬ��� = " << name.at(size_- 1) << endl;
// 4.	������� ��᪮�쪮 ᨬ����� � ��ப�.
    name[10] = 'N';
    name.at(6) = 'n';
    cout << name << endl;
// 5.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��� � 䠬����, � ��⥬ �뢮��� �� � �ଠ� "�������, ���".
    string name_1, surname;
    cout << "������ ��: " << endl;
    cin >> surname  >> name_1;
    cout << endl << surname << " , " << name_1 << endl;
// 6.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� �।������� � �뢮��� ���, ������� �� �஡��� �� �����.
    string text;
    cout << "������ �।�������: ";
    getline(std::cin, text);
    for (char &i : text) {
        if (i == ' ') {
            i = '-';
        }
    }
    cout << text << endl;
// 7.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ��� ᫮�� � ᮥ����� �� � ���� ��ப�.
    cout << "enter two word: " << endl;
    string word_1, word_2;
    cin >> word_1 >> word_2;
    string result = word_1 + ' ' + word_2;
    cout << result << endl;*/

// 1.	���� 楫�� ��६����� � 㪠��⥫� �� ���.
    int a = 100;
    int *ptr;
// 2.	��᢮�� 㪠��⥫� ���� ��६�����.
    ptr = &a;
    cout << *ptr << endl;
// 3.	������� ���祭�� ��६����� �१ 㪠��⥫�.
    *ptr = 123;
// 4.	�뢥��� ���祭�� ��६����� �� � ��᫥ ���������.
    cout << *ptr << endl;
// 5.	������ �㭪��, ����� �ਭ����� 㪠��⥫� �� 楫�� �᫮ � 㤢������ ���祭�� �� �⮬� �����.
    cout << endl;
    ptr_x2(ptr);
    cout << *ptr << endl;
// 6.	������ �ணࠬ��, ����� ���������� ���祭�� ���� ��६�����, �ᯮ���� 㪠��⥫�.
    int x = 10, y = 20;
    int *ptr_2 = &x, *ptr_3 = &y;
    cout << endl;
    cout << "x = " << *ptr_2 << endl;
    cout << "y = " << *ptr_3 << endl;
    replace(ptr_2, ptr_3);
    cout << "x = " << *ptr_2 << endl;
    cout << "y = " << *ptr_3 << endl;

// 7.	������� ��᪮�쪮 ��६����� ࠧ��� ⨯�� � 㪠��⥫�� �� ���. �뢥��� ���祭�� � ���� ��� ��६�����.
    int f = 15;
    char b = 'a';
    float n = 3.14;
    string s = "hello";
    int *ptr_4 = &f;
    char *ptr_5 = &b;
    float *ptr_6 = &n;
    string *ptr_7 = &s;
    cout << endl;
    cout << &ptr_4 << " : " << *ptr_4 << endl;
    cout << &ptr_5 << " : " << *ptr_5 << endl;
    cout << &ptr_6 << " : " << *ptr_6 << endl;
    cout << &ptr_7 << " : " << *ptr_7 << endl;

    



    int test;
    cin >> test;
}