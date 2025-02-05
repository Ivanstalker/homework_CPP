#include <iostream>

using namespace std;

void summa(int a, int b) {
    cout << "�㬬�: " << a + b << endl;
}

void counters() {
    int local_counter = 0;
    static int static_counter;
    static int sc;
    local_counter++;
    static_counter++;
    sc++;
    cout << "�맮� " << sc << " �����쭠� ��६�����: " << local_counter << ", ����᪠� ��६�����:" <<
            static_counter << endl;
}

int factorial(int n, int *counter) {
    (*counter)++; // �����稢��� ���稪 �맮��� �㭪樨
    if (n == 0)
        return 1;
    return n * factorial(n - 1, counter);
}

void increment(int x) {
    ++x;
    cout << "���祭�� ��६����� ����� �㭪樨: " << x << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int calculatesum(const int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    /*����� 1: ������ �㭪樨 (������)
    ������ �ணࠬ��, �����:
    1.  ����� � ��।���� �㭪�� int add(int a, int b), ����� �ਭ����� ��� 楫�� �᫠ � �����頥� �� �㬬�.
    2.  � main() ��뢠�� �㭪�� add() � ���� �᫠��, �������묨 ���짮��⥫��.
    3.  �뢮��� १���� �맮�� �㭪樨.
    �������� १����:
    ������ ��ࢮ� �᫮: 5
    ������ ��஥ �᫮: 7
    �㬬�: 12*/

    cout << "������ ��ࢮ� �᫮: ";
    int a, b;
    cin >> a;
    cout << "������ ��஥ �᫮: ";
    cin >> b;
    summa(a ,b);
    cout << endl;

    /*����� 2: ������� � ����᪨� ��६���� (�।���)
    ������ �ணࠬ��, �����:
    1.  ����� � ��।���� �㭪�� void counter().
    o  ����� �㭪樨 ᮧ���� �������� ��६����� int local_counter, ���樠�����㥬�� 0, � 㢥����� �� �� 1 �� ������ �맮�� �㭪樨.
    o  ����� ᮧ���� ������� ��६����� static int static_counter, ����� 㢥��稢����� �� 1 �� ������ �맮��.
    2.  � main() �맮��� �㭪�� counter() 5 ࠧ.
    3.  �뢥��� ���祭�� �����쭮� � ����᪮� ��६����� �� ������ �맮��.
    �������� १����:
    �맮� 1: ������� ���稪 = 1, ����᪨� ���稪 = 1
    �맮� 2: ������� ���稪 = 1, ����᪨� ���稪 = 2
    �맮� 3: ������� ���稪 = 1, ����᪨� ���稪 = 3
    �맮� 4: ������� ���稪 = 1, ����᪨� ���稪 = 4
    �맮� 5: ������� ���稪 = 1, ����᪨� ���稪 = 5*/

    counters();
    counters();
    counters();
    counters();
    counters();
    cout << endl;

    /*����� 3: ������� � 㪠��⥫� (᫮����)
������ �ணࠬ��, �����:
1.  ����� � ��।���� ४��ᨢ��� �㭪�� int factorial(int n, int* counter).
o  �㭪�� �ਭ����� 楫�� �᫮ n � 㪠��⥫� �� ��६����� counter.
o  counter �ᯮ������ ��� ������ ������⢠ �맮��� �㭪樨.
o  �᫨ n == 0, �㭪�� �����頥� 1. ���� ? �����頥� n * factorial(n-1, counter).
o  �� ������ �맮�� 㢥��稢��� ���祭�� counter �� 1.
2.  � main() ���� ���짮��⥫� ����� �᫮ n, ��뢠�� �㭪�� factorial() � �뢮��� 䠪�ਠ� �᫠ n � ������⢮ �맮��� �㭪樨.
�������� १����:
������ �᫮: 5
����ਠ� 5 = 120
������⢮ �맮��� �㭪樨: 6( �� ��� �����)*/

    int n;
    cout << "������ �᫮: ";
    cin >> n;

    int counter = 0; // ��६����� ��� ������ ������⢠ �맮���
    int result = factorial(n, &counter);
    cout << "����ਠ� " << n << " = " << result << endl;
    cout << "������⢮ �맮��� �㭪樨: " << counter << endl;
    cout << endl;

    /*����� 1: ��।�� ��㬥�⮢ �� ���祭�� (������)
������ �ணࠬ��, �����:
1.  ����� � ��।���� �㭪�� void increment(int number), ����� �ਭ����� �᫮ �� ���祭��, 㢥��稢��� ��� �� 1 � �뢮��� ����� �㭪樨.
2.  � main() ���樠������� ��६����� int x = 10, ��뢠�� �㭪�� increment(x) � �뢮��� ���祭�� x �� � ��᫥ �맮�� �㭪樨.
�������� १����:
���祭�� ����� �㭪樨: 11
���祭�� ��᫥ �맮�� �㭪樨: 10*/

    int x = 10;
    increment(x);
    cout << "���祭�� ��६����� ��᫥ �맮�� �㭪樨: " << x << endl;
    cout << endl;

    /*����� 2: ��।�� ��㬥�⮢ �� ��뫪� (�।���)
������ �ணࠬ��, �����:
1.  ����� � ��।���� �㭪�� void swap(int &a, int &b), ����� �ਭ����� ��� �᫠ �� ��뫪� � ����� �� ���⠬�.
2.  � main() ���樠������� ��� ��६���� int x = 5 � int y = 10, ��뢠�� �㭪�� swap(x, y), � ��⥬ �뢮��� ���祭�� x � y ��᫥ �맮�� �㭪樨.
�������� १����:
�� �맮�� swap: x = 5, y = 10
��᫥ �맮�� swap: x = 10, y = 5*/

    int xu = 5, yu = 10;
    cout << "�� �맮�� swap: " << "x = " << xu << ", y = " << yu << endl;
    swap(xu, yu);
    cout << "��᫥ �맮�� swap: " << "x = " << xu << ", y = " << yu << endl;
    cout << endl;

    /*����� 3: ����⠭�� ��ࠬ���� � ��।�� �� 㪠��⥫� (᫮����)
������ �ணࠬ��, �����:
1.  ����� � ��।���� �㭪�� int calculateSum(const int *arr, int size).
o  �㭪�� �ਭ����� ���ᨢ �ᥫ (㪠��⥫� �� ��� ���� �����) � ��� ࠧ���.
o  �ᯮ���� 㪠��⥫�, ������ � �����頥� �㬬� ��� ����⮢ ���ᨢ�.
2.  � main() ᮧ���� ���ᨢ int numbers[] = {2, 4, 6, 8, 10}.
3.  ��뢠�� �㭪�� calculateSum() � �뢮��� �㬬� ����⮢ ���ᨢ�.
�������� १����:
�㬬� ����⮢ ���ᨢ�: 30 */

    int numbers[] = {2, 4, 6, 8, 10};
    cout << "�㬬� ����⮢ ���ᨢ�: " << calculatesum(numbers, 5) << endl;
    cout << endl;


    int ab;
    cin >> ab;
    return 0;
}
