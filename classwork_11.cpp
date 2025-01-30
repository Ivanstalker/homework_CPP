#include <iostream>

using namespace std;

int ptr_arr(int size, int* arr) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

void arrrr(const int *const arr) {
    for (int i = 0;i < 10;i++) {
        cout << *(arr + i) << endl;
    }
}

int main() {
    // 1.	���� ��� 楫� ��६���� � ��� 㪠��⥫� �� ���.
    int x = 15;
    char c = 'a';
    int *x_ptr;
    char *c_ptr;
    // 2.	��᢮�� 㪠��⥫� ���� ��६�����.
    x_ptr = &x;
    c_ptr = &c;
    // 3.	������� ���祭�� ��६�����, �ᯮ���� ࠧ묥������� 㪠��⥫��.
    *x_ptr = 2;
    *c_ptr = 'b';
    // 4.	������� 㪠��⥫� � ��᢮�� ��� ���祭�� ��㣮�� 㪠��⥫�. �஢����, �� ��� 㪠��⥫� 㪠�뢠�� �� ���� � �� �� ������� �����.
    int a = 10;
    int *a_ptr = &a;
    int *y_ptr = a_ptr;
    cout << "<a> " << &a << " : " << a << endl;
    cout << "<a_ptr> " << &a_ptr << " : " << a_ptr << endl;
    cout << "<y_ptr> " << &y_ptr << " : " << y_ptr << endl;
    cout << endl;
    // 5.	���� 㪠��⥫� � ���樠������� ��� �㫥�� ���祭���. �஢����, �� ����⪠ ࠧ묥������� �⮣� 㪠��⥫� �ਢ���� � �訡��.
    int *ptr = nullptr;
    cout << ptr << endl;
    cout << endl;
    // 6.	������� ��뫪� �� 㪠��⥫� � ���஡�� �������� ���祭�� ��室���� 㪠��⥫� �१ ��뫪�.
    int n = 10;
    int n2 = 20;
    int *n_ptr = &n;
    cout << *n_ptr << endl;
    int *&ref_n_ptr = n_ptr;
    *ref_n_ptr = n2;
    cout << *n_ptr << endl;
    cout << endl;
    // 7.	�ࠢ��� ����� ᮡ�� ��� 㪠��⥫�, �᫨ ��� 㪠�뢠�� �� ࠧ�� ��६���� � �� ���� � �� �� ��६�����.
    int p = 1;
    int *ptr1 = &p;
    int *ptr2 = &p;
    if (ptr1 == ptr2) cout << (ptr1 == ptr2) << endl;
    else cout << (&ptr1 == &ptr2) << endl;



    // 1.	���� ���ᨢ 楫�� �ᥫ � 㪠��⥫� �� ��� ��砫�.
    int mass[] = {1, 2, 3, 4, 5};
    int *mass_ptr = mass;
    // 2.	�ன����� �� ���ᨢ�, �ᯮ���� ��䬥⨪� 㪠��⥫��, � �뢥��� ��� ������ �� �࠭.
    for (int i = 0; i < 5; i++) {
        cout << mass_ptr << " : " << *mass_ptr << endl;
        mass_ptr++;
    }
    // 3.	������ �㭪��, ����� �ਭ����� ���ᨢ 楫�� �ᥫ � ��� ࠧ���, � ������ �㬬� ����⮢ ���ᨢ�, �ᯮ���� ��䬥⨪� 㪠��⥫��.
    cout << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << ptr_arr(size, arr) << endl;
    cout << endl;
    // 4.	���� ��� 㪠��⥫� �� ���� ���ᨢ � ���᫨� ����ﭨ� ����� ����.
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr2 = arr2;
    int *ptr_arr3 = ptr_arr2 + 5;
    cout << *ptr_arr3 << endl;
    cout << *ptr_arr2 << endl;
    cout << ptr_arr3 - ptr_arr2 << endl;
    cout << endl;
    // 5.	�த���������� �� �ਬ�� ��室 㪠��⥫� �� �࠭��� ���ᨢ�.
    int ar[] = {1, 2, 3, 4, 5};
    int *ptr_ar = ar;
    for (int i = 0; i < 20; i++) cout << ptr_ar - i + 10 << " : " << *(ptr_ar - i + 10) << endl;
    cout << endl;
    // 6.	������ �ணࠬ��, ����� ����訢��� � ���짮��⥫� ������ ���ᨢ� � ��࠭�� �� � �ᯮ�짮������ 㪠��⥫��.
    int mass2[10];
    int *ptr_mass2 = mass2;
    for (int i = 0; i < 10; i++) {
        cout << "������ �᫮: ";
        cin >> ptr_mass2[i];
    }
    for (const auto i : mass2) cout << i << ' ';

    cout << endl;
// 1.	���� 㪠��⥫� �� ����⠭⭮� 楫�� �᫮ � ���஡�� �������� ���祭��, �� ���஥ �� 㪠�뢠��.
    const int o = 1234567;
    const int *o_ptr = &o;  //int *o_ptr = &o // error;
// 2.	���� ����⠭�� 㪠��⥫� � ���஡�� ��७��ࠢ��� ��� �� ����� ��६�����.
    int u = 1;
    int i = 2;
    int *const ptr4 = &u;
    // &ptr4 = &i;
// 3.	���� ����⠭�� 㪠��⥫� �� ����⠭�� � ���஡�� �������� ��� ���祭�� � ��७��ࠢ��� ��� �� ����� ��६�����.
    const int m = 1234;
    const int b = 4321;
    const int *const ptr5 = &m;
    // *ptr5 = 12; //error
    // &ptr5 = &b; //error
// 4.	������� ���ᨢ � ��ॡ��� ��� ������, �ᯮ���� 㪠��⥫�.
    int arrr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    const int *ptr_arrr = arrr;
    for (int i = 0; i < 15; i++) {
        cout << ptr_arrr << " : " << *ptr_arrr << endl;
        ptr_arrr++;
    }
    cout << endl;
// 5.	������� ���ᨢ 㪠��⥫�� � �ந��樠������� ��� ���ᠬ� 楫�� ��६�����.
    int y = 1, d = 2, e = 3;
    int *mas[] = {&y, &d, &e};
    for (auto & i : mas) cout << i << ' ';
    cout << endl;
// 6.	������ �㭪��, �ਭ������� ����⠭�� 㪠��⥫� �� ���ᨢ � �뢮����� ��� ���祭��.
    const int yptr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int *const ptr_yptr = yptr;
    arrrr(ptr_yptr);
    cin >> x;
    return 0;
}

