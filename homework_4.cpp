/*1. ���⮩ �������� ᥪ㭤 � ������ � ᥪ㭤�:

���ᠭ��: �ணࠬ�� ������ ������� � ���짮��⥫� ������⢮ ᥪ㭤 (楫�� �᫮) � �८�ࠧ����� �� � ������ � ᥪ㭤�.

�ॡ������:

������� � ���짮��⥫� ���� ������⢠ ᥪ㭤 (楫�� �᫮).

���᫨�� ������⢮ ����� (楫�� ������� �� 60).

���᫨�� ������⢮ ��⠢���� ᥪ㭤 (���⮪ �� ������� �� 60).*/
#include <iostream>

using namespace std;

int main() {
  cout << "������ ���-�� ᥪ㭤: ";
  int seconds;
  cin >> seconds;
  int minutes = seconds / 60;
  int last_seconds = seconds - seconds / 60 * 60;

  cout << seconds << " ᥪ㭤 - �� " << minutes << " �����(�) " << last_seconds << "ᥪ㭤" << endl;

  cin >> seconds;
}