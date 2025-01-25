






#include <random>
#include <iostream>
#include <vector>
#include <bits/locale_facets_nonio.h>

using namespace std;

void view(int &a, int &b) {
    int voi = a;
    a = b;
    b = voi;
}

void mas_2(vector<int> &mas) {
    for (int &i: mas) {
        i *= 2;
    }
}

void print_s(string &s) {
    cout << s << endl;
}

void swap_matrix(int (&matrix)[3][3], const int &row, const int &col) {
    int temp_matrix[row][col];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            temp_matrix[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            matrix[i][j] = temp_matrix[i][j];
        }
    }
}

int main() {
    srand(time(NULL));
    int chose;
    cout << "enter of tasks: ";
    cin >> chose;

    switch (chose) {
        case 1: {
            //1.	����� �ணࠬ��, ����� ����������� ࠡ��� � ��뫪��� � �� ���ﭨ� �� ��室�� ��६����.
            int num = 1;
            int &num_ref = num;
            cout << num << endl;
            num_ref += 1;
            cout << num << endl;
            break;
        }
        case 2: {
            //2.	����� �㭪��, ����� ����� ���⠬� ���祭�� ���� 楫�� �ᥫ, �ᯮ���� ��뫪�.
            int x = 1, y = 2;
            cout << x << "\n" << y << endl;
            view(x, y);
            cout << x << "\n" << y << endl;

            break;
        }
        case 3: {
            //3.	����� �㭪��, ����� �ਭ����� ���ᨢ �ᥫ � 㤢������ �� ���祭��, �ᯮ���� ��뫪�.
            vector<int> mas = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            mas_2(mas);
            for (int &i: mas) {
                cout << i << endl;
            }
            break;
        }
        case 4: {
            //4.	����� �㭪��, ����� �ਭ����� ��ப� � �뢮��� �� �� �࠭, �ᯮ���� ����⠭��� ��뫪�.
            string s = "Hello World!";
            print_s(s);
            break;
        }
        case 5: {
            // 1.	���� ���ᨢ 楫�� �ᥫ ࠧ��஬ 10.
            const int N = 10;
            int mas[10];
            // 2.	�������� ���ᨢ ��砩�묨 �᫠��.
            for (int &i : mas) {
                i = rand();

            }
            // 3.	�뢥��� �� ������ ���ᨢ� �� �࠭.
            for (int &i : mas) {
                cout << i << endl;
            }
            // 4.	������ �㬬� � �।��� ��䬥��᪮� ��� ����⮢ ���ᨢ�.
            int sum = 0;
            for (int &i : mas) {
                sum += i;
            }
            cout << endl << sum << endl;
            cout << sum / N << endl;
            // 5.	������ ��������� � ���ᨬ���� ������ ���ᨢ�.
            int max = INT8_MIN;
            int min = INT16_MAX;
            for (const int &i : mas) {
                if (max < i) {
                    max = i;
                }
                if (min > i) {
                    min = i;
                }
            }
            cout << "max= " << max << endl;
            cout << "min= " << min << endl;

            // 6.	������� ����⠭�� ���ᨢ, ����� ᮤ�ন� 12 ���祭�� (���ਬ��, ���-�� ���� � �����).
            const int mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            break;
        }
        case 6: {
            // 7.	������ �ணࠬ��, ����� �������� ���짮��⥫� ����� ���祭�� ���ᨢ� � ���᮫� � ��⥬ �뢮��� �� �� �࠭.
            int mas[10];
            for (int i = 0; i < 10; i++) {
                cout << "������ �᫮: " ;
                cin >> mas[i];
            }
            for (int &i : mas) {
                cout << i << "";
            }
            break;
        }
        case 7: {
    //1.	���� ��㬥�� ���ᨢ 楫�� �ᥫ ࠧ��஬ 4x5.
            int matrix[4][5];
    //2.	�������� ���ᨢ ��砩�묨 �᫠��.
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    matrix[i][j] = rand() % 10;
                }
            }
    //3.	�뢥��� �� ������ ���ᨢ� � ���� ⠡����.
            for (const auto &row : matrix) {
                for (const int &value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }
    //4.	������ �㬬� ��� ����⮢ ���ᨢ�.
            int sum = 0;
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    sum += matrix[i][j];
                }
            }
            cout << endl << "sum= " << sum << endl << endl;
    //5.	������ �㬬� ����⮢ � ������ ��ப� ���ᨢ�.
            for (const auto &row : matrix) {
                sum = 0;
                for (const int &value : row) {
                    sum += value;
                }
                cout << "sum_string= " << sum << endl;
            }
            cout << endl;
    //6.	������ �㬬� ����⮢ � ������ �⮫�� ���ᨢ�.
            for (int j = 0; j < 5; j++) {
                sum = 0;
                for (int i = 0; i < 4; i++) {
                    sum += matrix[i][j];
                }
                cout << "stroka= " << sum << endl;
            }
            cout << endl;
    //7.	������ �ணࠬ��, ����� �������� ���짮��⥫� ����� ���祭�� ��� ������ 3x3 � ��⥬ �뢮��� �� �� �࠭.
            int matrix_2[3][3];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    cout << "enter the number: ";
                    cin >> matrix_2[i][j];
                }
            }
            for (const auto &row : matrix_2) {
                for (const int &value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }
    //8.	�������� �㭪��, ����� �࠭ᯮ����� ��㬥�� ���ᨢ (����� ���⠬� ��ப� � �⮫���).
            cout << endl;
            swap_matrix(matrix_2, 3, 3);
            for (const auto &row : matrix_2) {
                for (const int &value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }


        }
    }
    cin >> chose;
}

