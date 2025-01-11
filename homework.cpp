/*1. Калькулятор простых арифметических операций:

Описание: Создайте программу, которая будет выполнять простые арифметические операции над двумя числами, введенными пользователем.

Требования:
Запросить у пользователя ввод двух чисел (с плавающей точкой, float или double).
Запросить у пользователя ввод символа операции (+, minus, *, /).
Выполнить соответствующую операцию над введенными числами.
Вывести результат операции на экран.
Обработать случай деления на ноль, сообщив пользователю об ошибке.
Использовать if - else if - else или switch-case для выбора операции.
Добавить комментарии, поясняющие логику программы.*/
#include <iostream>

#define Print std::cout <<

int main() {
    while (true) {
        system("chcp 65001");

        double number_1{}, number_2{};
        char letter{};

        Print "введите два числа:" << std::endl;
        std::cin >> number_1 >> number_2;
        Print "выберите действие(*, / , + , -):  " << std::endl;
        std::cin >> letter;

        if (letter == '/' and number_2 == 0 ) {
            Print "ошибка: деление на ноль!\n";
        }
        if (letter == '+') {
            double sum = number_1 + number_2;
            Print sum << std::endl;
        }
        if (letter == '-') {
            double sub = number_1 - number_2;
            Print sub << std::endl;
        }
        if (letter == '*') {
            double mul = number_1 * number_2;
            Print mul << std::endl;
        }
        if (letter == '/' and number_2 != 0) {
            double div = number_1 / number_2;
            Print number_1 / number_2 << std::endl;
        }

    }
}