#include <iostream>

using namespace std;

void sum(int a, int b) {
    cout << a + b << endl;
}

void print_string(const string &s, const int &times = 1) {
    for (int i = 0; i < times; i++) {
        cout << s << endl;
    }
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void arr_x2(int arr1[], int size) {
    for (int i = 0; i < size; i++) {
        arr1[i] *= 2;
    }
}

int size_string(const string &s) {
    return s.length();
}

void print_float(const double &f) {
    string f_str = to_string(f);
    for (auto i : f_str) {
        cout << i;
    }
}

int main() {
// 1.	Напишите функцию, которая принимает два числа и возвращает их сумму.
    int a1 = 1234;
    int b1 = 12345;
    sum(a1, b1);
    cout << endl;
// 2.	Напишите функцию, которая принимает строку и количество раз, которое ее нужно вывести на экран (используйте параметр по умолчанию).
    string s = "Hello";
    print_string(s);
    cout << endl;
    print_string(s, 5);
    cout << endl;
// 3.	Напишите функцию, которая меняет значения двух целых чисел, переданных по ссылке.
    int a2 = 0;
    int b2 = 1;
    swap(a2, b2);
    cout << a2 << ' ' << b2 << endl;
    cout << endl;
// 4.	Напишите функцию, которая принимает массив целых чисел и удваивает каждый элемент, используя передачу по ссылке.
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    arr_x2(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    cout << endl;
// 5.	Напишите функцию, которая принимает строку и возвращает ее длину, используя константную ссылку.
    const string text = "Hello world!";
    cout << size_string(text) << endl;
    cout << endl;

// 6.	Напишите функцию, которая принимает число с плавающей точкой и выводит его на экран, используя константный параметр.
    double pi = 3.14159265359;
    print_float(pi);

    cin >> a1;
}