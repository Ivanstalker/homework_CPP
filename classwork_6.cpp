//конвертер чисел десятичного исчесления в двоичное
#include <iostream>


using namespace std;

string to_binary(int n_int) {
    string n_binary{};
    for (int i = n_int; i > 0; i /= 2) {
        n_binary = to_string(i % 2) + n_binary;
    }
    return n_binary;
}

int main() {
    //1.	Напиши программу, которая преобразует десятичное число в двоичное представление.
    /*cout << "введите число в десятичной системе исчесления: ";
    string n_str;
    cin >> n_str;
    string n_binary;
    int r = 0;
    int n_int = stoi(n_str);
    for (int i = n_int; i > 0; i /= 2) {
        n_binary = to_string(i % 2) + n_binary;
    }
    cout << n_str << " в двоичной системе исчисления = " << n_binary << endl;*/

     //2.	Напиши программу, которая выполняет поразрядные операции (&, |, ^, ~) над двумя введенными числами.
    int a , b;
    cout << "введите два числа:" << endl;
    cin >> a >> b;
    cout << a << " : " << to_binary(a) << endl << b << " : 1" << to_binary(b) << endl ;
    cout << to_binary(a) << " & " << to_binary(b) << " = " << (a & b) << endl;
    cout << to_binary(a) << " | " << to_binary(b) << " = " << (a | b) << endl;
    cout << to_binary(a) << " ^ " << to_binary(b) << " = " << (a ^ b) << endl;
    cout << "~ " << to_binary(a) << " = " << (~a) << endl;
    cout << "~ " << to_binary(b) << " = " << (~b) << endl;
    int stop;
    cin >> stop;

}