#include <cmath>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    //1.	Напиши программу, которая демонстрирует неявные преобразования при арифметических операциях
    int int_value = 23;
    float float_value = int_value;

    cout << "int_value = " << int_value << endl;
    cout << "float_value = " << float_value << endl;

    //4.	Напиши программу, которая запрашивает у пользователя число с плавающей точкой, а затем выводит его целочисленное значение (с отбрасыванием дробной части) и округленное значение (используя функцию std::round).
    cout << "введите число с плавающей точкой: " << endl;
    float number;
    cin >> number;
    cout << "число с отброщенной точкой: " << int(number) << endl;
    cout << "округленное число: " << round(number) << endl;

    int stop ;
    cin >> stop;
}