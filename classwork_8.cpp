#include <iostream>
#include <vector>

using namespace std;

int main() {
    int task;
    cout << "enter the number of tasks: ";
    cin >> task;


    switch (task) {
        case 1: {
            //1. Напиши программу, которая запрашивает у пользователя номер месяца и выводит название месяца
            int month;
            string months;
            cout << "введите номер месяца: ";
            cin >> month;

            switch (month) {
                case 1:
                    months = "January";
                break;
                case 2:
                    months = "February";
                break;
                case 3:
                    months = "March";
                break;
                case 4:
                    months = "April";
                break;
                case 5:
                    months = "May";
                break;
                case 6:
                    months = "June";
                break;
                case 7:
                    months = "July";
                break;
                case 8:
                    months = "August";
                break;
                case 9:
                    months = "September";
                break;
                case 10:
                    months = "October";
                break;
                case 11:
                    months = "November";
                break;
                case 12:
                    months = "December";
                break;

                default:
                    cout << "invalid input !";
            }
            cout << months << endl;
            break;
        }
        case 2: {
            //2.	Напиши программу, которая имитирует простой калькулятор. Пользователь вводит два числа и символ
            //операции (например, +, -, *, /), а программа выводит результат.
            int number_1, number_2;
            char symbol;
            cout << "введите два числа и операцию(+ - * /): " << endl;
            cin >> number_1 >> number_2 >> symbol;

            switch (symbol) {
                case '+':
                    cout << number_1 << " + " << number_2 << " = "  <<   number_1 + number_2 << endl;
                break;
                case '-':
                    cout << number_1 << " - " << number_2 << " = " <<   number_1 - number_2 << endl;
                break;
                case '*':
                    cout << number_1 << " * " << number_2 << " = " <<   number_1 * number_2 << endl;
                break;
                case '/':
                    cout << number_1 << " / " << number_2 << " = " <<   number_1/number_2 << endl;
                break;

                default:
                    cout << "invalid input !";
            }
            break;
        }
        case 3: {
            //3.Напиши программу, которая преобразует оценку в виде буквы (A, B, C, D, F) в ее словесное описание
            //(например, "отлично", "хорошо" и т.д.).
            char grade;
            cout << "введите отметку(A , B , C , D , F): ";
            cin >> grade;

            switch (grade) {
                case 'A':
                    cout << "Отлично";
                break;
                case 'B':
                    cout << "Хорошо";
                break;
                case 'C':
                    cout << "Нормально";
                break;
                case 'D':
                    cout << "Удовлитворительно";
                break;
                case 'F':
                    cout << "Неудовлитворительно";
                break;

                default:
                    cout << "invalid input !";
            }
            break;
        }
        case 4: {
            // 1.	Напиши программу, которая выводит все числа от 1 до 100, используя циклы while и for.
            int i = 1;
            while (i <= 100) {
                cout << i << " ";
                i++;
            }
            cout << endl << endl;
            for (int i = 1; i <= 100; i++) {
                cout << i << " ";
            }
        }
        case 5: {
            // 2.	Напиши программу, которая запрашивает у пользователя число и выводит таблицу умножения для этого числа.
            int number;
            cout << "введите число: ";
            cin >> number;
            cout << endl;

            for (int i = 1 ; i <= 10; i++) {
                cout << number << " * " << i << " = " << number * i << endl;
            }
            break;
        }
        case 6: {
            // 3.	Напиши программу, которая вычисляет факториал введенного числа с помощью цикла for.
            int number, num;
            cout << "введите число: ";
            cin >> number;
            int factorial = 1;
            for (int i = 1 ; i <= number; i++) {
                factorial *= i;
            }
            cout << "факториал числа: " << factorial << endl;
            break;
        }
        case 7: {
            // 4.	Напиши программу, которая запрашивает у пользователя числа и суммирует их до тех пор, пока пользователь не введет 0. Используй цикл do...while.
            int number, sum = 0;


            do {
                cout << "вводите числа для суммирования(для остановки введите 0): ";
                cin >> number;
                sum += number;
            }while (number != 0);
            cout << sum << endl;
            break;
        }
        case 8: {
            // 5.	Напиши программу, которая перебирает элементы массива и выводит только четные числа, используя цикл for-each.
            int num[10] = {1 , 2, 3, 4, 5, 6, 7, 8, 9, 10};
            for (int i : num) {
                i % 2 == 0 ? cout << i << " " : cout;
            }
            break;
        }
        case 9: {
            // 6.	Напиши программу, которая выводит на экран "ёлочку" из символов, используя вложенные циклы for.

        }
        case 10: {
            // 7.	Напиши бесконечный цикл с выходом по условию.
            while (true) {
                cout << "введите пароль: ";
                int password = 1898;
                int e_password;
                cin >> e_password;
                if (e_password == password) {
                    break;
                }
                else {
                    cout << "неверный пароль !" << endl;
                }
            }
        }



    }

    cin >> task;
    return 0;
}
