#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);

    double Time;

    std::cout << "Введите текущее время: " << std::endl;
    std::cin >> Time;

    if (Time <= 6) {
        std::cout << "Доброй ночи! " << "Час: " << Time << std::endl;
    }else if (Time <= 12) {
        std::cout << "Добрый утро! " << "Час: " << Time << std::endl;
    }else if (Time <= 18) {
        std::cout << "Добрый день! " << "Час: " << Time << std::endl;
    }else {
        std::cout << "Добрый вечер!" << "Час: " << Time << std::endl;
    }

    return 0;

}