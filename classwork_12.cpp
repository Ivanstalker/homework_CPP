#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

string reverse_string(string s) {
    string result;
    for (auto i : s){
        result = i + result;
    }
    return result;
}

double mass_sr(int array[]) {
    double sum = 0;
    int f = sizeof(array) / sizeof(array[0]);
    for (int i = 0 ; i < f; i++) {
        sum += array[i];
    }
    return sum / f;
}

int global_var = 1489;

void func() {
    static int gl = 1221211;
    gl++;
    cout << gl << endl;
}

int main() {
    // 1.	������ �㭪��, ����� �ਭ����� ��� 楫�� �᫠ � �����頥� �� �㬬�.

    int d= 5, c = 10;
    cout << sum(d, c) << endl;
    cout << endl;

    // 2.	������ �㭪��, ����� �ਭ����� ��ப� � �뢮��� �� � ���⭮� ���浪�.

    string s = "Hello World!";
    cout << reverse_string(s) << endl;
    cout << endl;

    // 3.	������ �㭪��, ����� �ਭ����� ���ᨢ 楫�� �ᥫ � �����頥� �।��� ��䬥��᪮� ����⮢ ���ᨢ�.

    int mass[] = {-1, 2, 100, 23345, -1415, 1, 9, 10};
    cout << mass_sr(mass) << endl;
    cout << endl;

    // 4.	������� ��������� ��६����� � �ᯮ���� �� ����� � ��� �㭪樨.

    int global_var = 1;
    cout << global_var << endl;
    cout << ::global_var << endl;

    // 5.	������� �������� ��६����� ����� �㭪樨 � ���஡�� ������� � ��� ����� ��� �㭪樨.

    // cout << gl << endl; //error
    cout << endl;

    // 6.	������� ������� ��६����� ����� �㭪樨 � �஢����, �� ��� ��࠭�� ᢮� ���祭�� ����� �맮���� �㭪樨.

    func();
    func();
    func();
    func();



    // 1.	������ �㭪��, ����� �ਭ����� ��� �᫠ � �����頥� �� �㬬�.

    // 2.	������ �㭪��, ����� �ਭ����� ��ப� � ������⢮ ࠧ, ���஥ �� �㦭� �뢥�� �� �࠭ (�ᯮ���� ��ࠬ��� �� 㬮�砭��).
    // 3.	������ �㭪��, ����� ����� ���祭�� ���� 楫�� �ᥫ, ��।����� �� ��뫪�.
    // 4.	������ �㭪��, ����� �ਭ����� ���ᨢ 楫�� �ᥫ � 㤢������ ����� �����, �ᯮ���� ��।��� �� ��뫪�.
    // 5.	������ �㭪��, ����� �ਭ����� ��ப� � �����頥� �� �����, �ᯮ���� ����⠭��� ��뫪�.
    // 6.	������ �㭪��, ����� �ਭ����� �᫮ � ������饩 �窮� � �뢮��� ��� �� �࠭, �ᯮ���� ����⠭�� ��ࠬ���.


    int io;
    cin >> io;
    return 0;
}
