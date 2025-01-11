// 2. Конвертер валют:
// Описание: Разработайте программу, которая будет конвертировать сумму из одной валюты в другую.
// Требования:
// Запросить у пользователя ввод суммы в исходной валюте (например, в долларах).
// Запросить у пользователя, в какую валюту нужно конвертировать (например, в евро или рубли).
// Использовать константы для хранения текущих курсов валют. (Например, const float USD_TO_EUR = 0.92f; и const float USD_TO_RUB = 90.0f;)
// Выполнить соответствующее преобразование.
// Вывести результат на экран с округлением до двух знаков после запятой (с помощью std::fixed и std::setprecision(2), которые нужно подключить через #include <iomanip>).
// Обработать случай некорректного ввода валюты (сообщить об ошибке).
// Использовать if-else if-else или switch-case для выбора валюты.
// Добавить комментарии, поясняющие логику программы.

#include <iostream>
#include <iomanip>

#define print std::cout <<

int  main() {
    system("chcp 65001");
    std::string valute_1{};
    float money{}, a{};
    const float USD_TO_EUR = 0.92f;
    const float USD_TO_RUB = 90.0f;

    print "введите сумму для ковертации: ";
    std::cin >> money;
    print "введите из какой валюты в какую будет конвертация из (USD) в (EUR , RUB): ";
    std::cin >> valute_1;


    if (valute_1 == "EUR") {
        float money_2 = USD_TO_EUR * money;
        print "Сумма в евро:" <<  money_2;
    }

    if (valute_1 == "RUB") {
        float money_2 = USD_TO_RUB * money;
        print "Суммма в рублях: " << money_2;
    }

    if (valute_1 != "EUR" and valute_1 != "RUB") {
        print "ошибка! неверный ввод валюты";
    }

    std::cin >> a;
    return 0;
}
