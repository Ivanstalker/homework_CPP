






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
            //1.	Напиши программу, которая демонстрирует работу с ссылками и их влияние на исходные переменные.
            int num = 1;
            int &num_ref = num;
            cout << num << endl;
            num_ref += 1;
            cout << num << endl;
            break;
        }
        case 2: {
            //2.	Напиши функцию, которая меняет местами значения двух целых чисел, используя ссылки.
            int x = 1, y = 2;
            cout << x << "\n" << y << endl;
            view(x, y);
            cout << x << "\n" << y << endl;

            break;
        }
        case 3: {
            //3.	Напиши функцию, которая принимает массив чисел и удваивает их значения, используя ссылки.
            vector<int> mas = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            mas_2(mas);
            for (int &i: mas) {
                cout << i << endl;
            }
            break;
        }
        case 4: {
            //4.	Напиши функцию, которая принимает строку и выводит ее на экран, используя константную ссылку.
            string s = "Hello World!";
            print_s(s);
            break;
        }
        case 5: {
            // 1.	Объявите массив целых чисел размером 10.
            const int N = 10;
            int mas[10];
            // 2.	Заполните массив случайными числами.
            for (int &i : mas) {
                i = rand();

            }
            // 3.	Выведите все элементы массива на экран.
            for (int &i : mas) {
                cout << i << endl;
            }
            // 4.	Найдите сумму и среднее арифметическое всех элементов массива.
            int sum = 0;
            for (int &i : mas) {
                sum += i;
            }
            cout << endl << sum << endl;
            cout << sum / N << endl;
            // 5.	Найдите минимальный и максимальный элементы массива.
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

            // 6.	Создайте константный массив, который содержит 12 значений (например, кол-во дней в месяце).
            const int mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            break;
        }
        case 6: {
            // 7.	Напишите программу, которая позволяет пользователю ввести значения массива с консоли и затем выводит их на экран.
            int mas[10];
            for (int i = 0; i < 10; i++) {
                cout << "введите число: " ;
                cin >> mas[i];
            }
            for (int &i : mas) {
                cout << i << "";
            }
            break;
        }
        case 7: {
    //1.	Объявите двумерный массив целых чисел размером 4x5.
            int matrix[4][5];
    //2.	Заполните массив случайными числами.
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    matrix[i][j] = rand() % 10;
                }
            }
    //3.	Выведите все элементы массива в виде таблицы.
            for (const auto &row : matrix) {
                for (const int &value : row) {
                    cout << value << " ";
                }
                cout << endl;
            }
    //4.	Найдите сумму всех элементов массива.
            int sum = 0;
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 5; j++) {
                    sum += matrix[i][j];
                }
            }
            cout << endl << "sum= " << sum << endl << endl;
    //5.	Найдите сумму элементов в каждой строке массива.
            for (const auto &row : matrix) {
                sum = 0;
                for (const int &value : row) {
                    sum += value;
                }
                cout << "sum_string= " << sum << endl;
            }
            cout << endl;
    //6.	Найдите сумму элементов в каждом столбце массива.
            for (int j = 0; j < 5; j++) {
                sum = 0;
                for (int i = 0; i < 4; i++) {
                    sum += matrix[i][j];
                }
                cout << "stroka= " << sum << endl;
            }
            cout << endl;
    //7.	Напишите программу, которая позволяет пользователю ввести значения для матрицы 3x3 и затем выводит их на экран.
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
    //8.	Реализуйте функцию, которая транспонирует двумерный массив (меняет местами строки и столбцы).
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

