#include <iostream>

using namespace std;

int main() {
    int chose;
    cout << "enter number of tasks: ";
    cin >> chose;

    if (chose == 1) {
        //3.  Напиши программу, которая определяет, является ли введенный символ гласной или согласной буквой (в английском алфавите).
        char symbol;
        cout << "enter the  letter: ";
        cin >> symbol;

        if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u' || symbol == 'y') {
            cout << "this letter was  vowel" << endl;
        } else if (symbol == 'b' || symbol == 'c' || symbol == 'd' || symbol == 'f' || symbol == 'g' || symbol == 'h' ||
                   symbol == 'j' || symbol == 'k' || symbol == 'l'
                   || symbol == 'm' || symbol == 'n' || symbol == 'p' || symbol == 'q' || symbol == 'r' || symbol == 's'
                   || symbol == 't' || symbol == 'v' || symbol == 'w'
                   || symbol == 'x' || symbol == 'y' || symbol == 'z') {
            cout << "this letter was  consonant" << endl;
        } else {
            cout << "this not letter! " << endl;
        }
    }
    if (chose == 2) {
        //4.  Напиши программу, которая использует тернарный оператор для определения четности введенного числа.
        int number;
        cout << "введите число: ";
        cin >> number;
        string message = (number % 2 == 0) ? "число четное" : "число нечетное";
        cout << message << endl;
    }
    if (chose == 3) {
        // 5.  Напиши программу, которая имитирует простую систему авторизации.
        int age;
        string name, surname, phone, password;
        cout << "введите своё имя: ";
        cin >> name;
        cout << "введите фамилию: ";
        cin >> surname;
        cout << "введите возраст: ";
        cin >> age;
        cout << "введите номер телефона: ";
        cin >> phone;
        cout << "придумайте пароль: ";
        cin>> password;
        string e_password;
        cout << "\n введите пароль: ";
        cin >> e_password;
        while (e_password != password ) {
            cout << "неверный пароль!!";
            cout << "\n введите пароль: ";
            cin >> e_password;
        }
        if (e_password == password) cout << "ваши данные: \n" << "  имя фамилия: " << name << " " << surname << "\n" << "  возраст: " << age << "\n" << "  номер телефона: " << phone << endl;
    }

    cin >> chose;
}
