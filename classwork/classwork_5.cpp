// проверка текста
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;


int main() {
    cout << "введите текст для проверки: ";
    string text;
    getline(cin, text);
    int spaces_count = 0, capital = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            spaces_count++;
        }
        if (tolower(text[i]) == 'a' ||
            tolower(text[i]) == 'e' ||
            tolower(text[i]) == 'i' ||
            tolower(text[i]) == 'o' ||
            tolower(text[i]) == 'u' ||
            tolower(text[i]) == 'а' ||
            tolower(text[i]) == 'у' ||
            tolower(text[i]) == 'и' ||
            tolower(text[i]) == 'у' ||
            tolower(text[i]) == 'е' ||
            tolower(text[i]) == 'ы' ||
            tolower(text[i]) == 'о' ||
            tolower(text[i]) == 'я') {
            capital++;
        }

    }
    cout << "кол-во символов: " << text.length() << endl;
    cout << "кол-во пробелов: " << spaces_count << endl;
    cout << "кол-во гласных букв: " << capital;

    int f;
    cin >> f;
}