#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //1.	����� �ணࠬ��, ����� ����������� ��� �८�ࠧ������ �� ��䬥��᪨� �������
    int int_value = 23;
    float float_value = int_value;

    cout << "int_value = " << int_value << endl;
    cout << "float_value = " << float_value << endl;

    //4.	����� �ணࠬ��, ����� ����訢��� � ���짮��⥫� �᫮ � ������饩 �窮�, � ��⥬ �뢮��� ��� 楫��᫥���� ���祭�� (� ����뢠���� �஡��� ���) � ���㣫����� ���祭�� (�ᯮ���� �㭪�� std::round).
    cout << "������ �᫮ � ������饩 �窮�: " << endl;
    float number;
    cin >> number;
    cout << "�᫮ � ���饭��� �窮�: " << int(number) << endl;
    cout << "���㣫����� �᫮: " << round(number) << endl;

    int stop ;
    cin >> stop;
}