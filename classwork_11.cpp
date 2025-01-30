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
    // 1.	Объявите две целые переменные и два указателя на них.
    int x = 15;
    char c = 'a';
    int *x_ptr;
    char *c_ptr;
    // 2.	Присвойте указателям адреса переменных.
    x_ptr = &x;
    c_ptr = &c;
    // 3.	Измените значения переменных, используя разыменование указателей.
    *x_ptr = 2;
    *c_ptr = 'b';
    // 4.	Создайте указатель и присвойте ему значение другого указателя. Проверьте, что оба указателя указывают на одну и ту же область памяти.
    int a = 10;
    int *a_ptr = &a;
    int *y_ptr = a_ptr;
    cout << "<a> " << &a << " : " << a << endl;
    cout << "<a_ptr> " << &a_ptr << " : " << a_ptr << endl;
    cout << "<y_ptr> " << &y_ptr << " : " << y_ptr << endl;
    cout << endl;
    // 5.	Объявите указатель и инициализируйте его нулевым значением. Проверьте, что попытка разыменования этого указателя приведет к ошибке.
    int *ptr = nullptr;
    cout << ptr << endl;
    cout << endl;
    // 6.	Создайте ссылку на указатель и попробуйте изменить значение исходного указателя через ссылку.
    int n = 10;
    int n2 = 20;
    int *n_ptr = &n;
    cout << *n_ptr << endl;
    int *&ref_n_ptr = n_ptr;
    *ref_n_ptr = n2;
    cout << *n_ptr << endl;
    cout << endl;
    // 7.	Сравните между собой два указателя, если они указывают на разные переменные и на одну и ту же переменную.
    int p = 1;
    int *ptr1 = &p;
    int *ptr2 = &p;
    if (ptr1 == ptr2) cout << (ptr1 == ptr2) << endl;
    else cout << (&ptr1 == &ptr2) << endl;



    // 1.	Объявите массив целых чисел и указатель на его начало.
    int mass[] = {1, 2, 3, 4, 5};
    int *mass_ptr = mass;
    // 2.	Пройдитесь по массиву, используя арифметику указателей, и выведите его элементы на экран.
    for (int i = 0; i < 5; i++) {
        cout << mass_ptr << " : " << *mass_ptr << endl;
        mass_ptr++;
    }
    // 3.	Напишите функцию, которая принимает массив целых чисел и его размер, и вычисляет сумму элементов массива, используя арифметику указателей.
    cout << endl;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << ptr_arr(size, arr) << endl;
    cout << endl;
    // 4.	Объявите два указателя на один массив и вычислите расстояние между ними.
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr_arr2 = arr2;
    int *ptr_arr3 = ptr_arr2 + 5;
    cout << *ptr_arr3 << endl;
    cout << *ptr_arr2 << endl;
    cout << ptr_arr3 - ptr_arr2 << endl;
    cout << endl;
    // 5.	Продемонстрируйте на примере выход указателя за границы массива.
    int ar[] = {1, 2, 3, 4, 5};
    int *ptr_ar = ar;
    for (int i = 0; i < 20; i++) cout << ptr_ar - i + 10 << " : " << *(ptr_ar - i + 10) << endl;
    cout << endl;
    // 6.	Напишите программу, которая запрашивает у пользователя элементы массива и сохраняет их с использованием указателей.
    int mass2[10];
    int *ptr_mass2 = mass2;
    for (int i = 0; i < 10; i++) {
        cout << "введите число: ";
        cin >> ptr_mass2[i];
    }
    for (const auto i : mass2) cout << i << ' ';

    cout << endl;
// 1.	Объявите указатель на константное целое число и попробуйте изменить значение, на которое он указывает.
    const int o = 1234567;
    const int *o_ptr = &o;  //int *o_ptr = &o // error;
// 2.	Объявите константный указатель и попробуйте перенаправить его на другую переменную.
    int u = 1;
    int i = 2;
    int *const ptr4 = &u;
    // &ptr4 = &i;
// 3.	Объявите константный указатель на константу и попробуйте изменить его значение и перенаправить его на другую переменную.
    const int m = 1234;
    const int b = 4321;
    const int *const ptr5 = &m;
    // *ptr5 = 12; //error
    // &ptr5 = &b; //error
// 4.	Создайте массив и переберите его элементы, используя указатель.
    int arrr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    const int *ptr_arrr = arrr;
    for (int i = 0; i < 15; i++) {
        cout << ptr_arrr << " : " << *ptr_arrr << endl;
        ptr_arrr++;
    }
    cout << endl;
// 5.	Создайте массив указателей и проинициализируйте его адресами целых переменных.
    int y = 1, d = 2, e = 3;
    int *mas[] = {&y, &d, &e};
    for (auto & i : mas) cout << i << ' ';
    cout << endl;
// 6.	Напишите функцию, принимающую константный указатель на массив и выводящую его значения.
    const int yptr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int *const ptr_yptr = yptr;
    arrrr(ptr_yptr);
    cin >> x;
    return 0;
}

