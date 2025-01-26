#include <iostream>
#include <string.h>


using namespace std;

void ptr_x2(int *num) {
    *num *= 2;
}
void replace(int *num_1, int *num_2) {
    int twice = *num_1;
    *num_1 = *num_2;
    *num_2 = twice;
}

int main() {
    // 1.	Объявите массив символов и инициализируйте его строкой "Programming".
    /*char array_1[] = "Programing";
    // 2.	Выведите каждый символ массива на экран.
    for (char i : array_1) {
        cout << i ;
    }
    cout << endl;
    // 3.	Объявите двумерный массив символов 3x10 и инициализируйте его тремя именами.
    char array_2[3][10] = {
        "Ivan",
        "Sanya",
        "Artem"};
    // 4.	Выведите все имена из двумерного массива на экран
    for (const auto i : array_2) {
        cout << i << endl;
    }
    cout << endl;
    // 5.	Напишите программу, которая запрашивает у пользователя строку, выводит ее на экран, а затем выводит ее в обратном порядке.
    cout << "введите строку: ";
    char array_3[10]{};
    cin.getline (array_3, 10);
    int i = 9;
    while (i >= 0) {
        cout << array_3[i];
        i--;
    }
    cout << endl;
    // 6.	Напишите программу, которая запрашивает у пользователя несколько строк, сохраняет их в двумерном массиве, а затем выводит их на экран.
    char array4[10][10]{}; // Двумерный массив
    int f = 0;

    while (f < 10) {
        cout << "Enter string (or a single space to stop): ";
        char s[10];
        cin.getline(s, 10); // Считываем строку с пробелами
        // Проверяем, если строка равна " " (пробел), то останавливаем ввод
        if (strcmp(s, " ") == 0) {
            break;
        }
        // Копируем введенную строку в двумерный массив
        strcpy(array4[f], s);
        f++;
    }

    for (const auto& s : array4) {
        cout << s << endl;
    }

    // 7.	Создайте программу, которая запрашивает у пользователя текст и находит в нём количество гласных букв (a, e, i, o, u).
    char array_5[32]{};
    int k = 0;
    cout << "enter the text: ";
    cin >> array_5;
    for (const auto & s : array_5) {
        if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') {
            k += 1;
        }
    }
    cout << k << endl;
//     1.	Объявите строку и инициализируйте ее значением "Hello, C++!".
    /*string name = "Hello, C++!";
// 2.	Выведите длину этой строки.
    cout << "длина строки = " << name.size() << endl;
// 3.	Выведите первый и последний символы этой строки.
    int size_ = name.size();
    cout << "первый символ = " << name.at(0) << endl;
    cout << "последний символ = " << name.at(size_- 1) << endl;
// 4.	Измените несколько символов в строке.
    name[10] = 'N';
    name.at(6) = 'n';
    cout << name << endl;
// 5.	Напишите программу, которая запрашивает у пользователя имя и фамилию, а затем выводит их в формате "Фамилия, Имя".
    string name_1, surname;
    cout << "введите ФИ: " << endl;
    cin >> surname  >> name_1;
    cout << endl << surname << " , " << name_1 << endl;
// 6.	Напишите программу, которая запрашивает у пользователя предложение и выводит его, заменив все пробелы на дефисы.
    string text;
    cout << "введите предложение: ";
    getline(std::cin, text);
    for (char &i : text) {
        if (i == ' ') {
            i = '-';
        }
    }
    cout << text << endl;
// 7.	Напишите программу, которая запрашивает у пользователя два слова и соединяет их в одну строку.
    cout << "enter two word: " << endl;
    string word_1, word_2;
    cin >> word_1 >> word_2;
    string result = word_1 + ' ' + word_2;
    cout << result << endl;*/

// 1.	Объявите целую переменную и указатель на нее.
    int a = 100;
    int *ptr;
// 2.	Присвойте указателю адрес переменной.
    ptr = &a;
    cout << *ptr << endl;
// 3.	Измените значение переменной через указатель.
    *ptr = 123;
// 4.	Выведите значение переменной до и после изменения.
    cout << *ptr << endl;
// 5.	Напишите функцию, которая принимает указатель на целое число и удваивает значение по этому адресу.
    cout << endl;
    ptr_x2(ptr);
    cout << *ptr << endl;
// 6.	Напишите программу, которая обменивает значения двух переменных, используя указатели.
    int x = 10, y = 20;
    int *ptr_2 = &x, *ptr_3 = &y;
    cout << endl;
    cout << "x = " << *ptr_2 << endl;
    cout << "y = " << *ptr_3 << endl;
    replace(ptr_2, ptr_3);
    cout << "x = " << *ptr_2 << endl;
    cout << "y = " << *ptr_3 << endl;

// 7.	Создайте несколько переменных разных типов и указателей на них. Выведите значения и адреса этих переменных.
    int f = 15;
    char b = 'a';
    float n = 3.14;
    string s = "hello";
    int *ptr_4 = &f;
    char *ptr_5 = &b;
    float *ptr_6 = &n;
    string *ptr_7 = &s;
    cout << endl;
    cout << &ptr_4 << " : " << *ptr_4 << endl;
    cout << &ptr_5 << " : " << *ptr_5 << endl;
    cout << &ptr_6 << " : " << *ptr_6 << endl;
    cout << &ptr_7 << " : " << *ptr_7 << endl;

    



    int test;
    cin >> test;
}