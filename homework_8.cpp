#include <iostream>
#include <random>
using namespace std;

int main() {
    srand(time(NULL));
    //    5.  ����� �ணࠬ��, ����� ��ॡ�ࠥ� ������ ���ᨢ� � �뢮��� ⮫쪮 ��� �᫠, �ᯮ���� 横� for-each.
    int mass[10];
    for (int i = 0; i < 10; i++) {
        mass[i] = rand() % 100;
    }
    for (const auto i: mass) {
        cout << i << ' ';
    }
    cout << endl;
    for (const auto i: mass) {
        if (i % 2 == 0) {
            cout << i << ' ';
        }
    }
    cout << endl;
    cout << endl;
    // 6.  ����� �ணࠬ��, ����� �뢮��� �� �࠭ "���" �� ᨬ�����, �ᯮ���� �������� 横�� for.(build by chat gpt)
    int height; // ���� �窨
    cout << "������ ࠧ��� �窨: ";
    cin >> height;

    for (int i = 1; i <= height; i++) {
        // �뢮� �஡���� ��� ��ࠢ�������
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }
        // �뢮� ������祪
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl; // ��ॢ�� ��ப�
    }

    // 7.  ����� ��᪮���� 横� � ��室�� �� �᫮���.
    cout << endl;
    int password = 1898;
    while (true) {
        int password_e;
        cout << "Enter your password: ";
        cin >> password_e;
        if (password_e == password) {
            cout << "Your password is correct!" << endl;
            break;
        } else cout << "Wrong password!" << endl;
    }
    cin >> password;
}
