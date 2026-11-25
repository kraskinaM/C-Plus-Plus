#include <iostream>
#include <cmath>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double num_1;
    double num_2;
    char Symbol;

    std::cout << "Калькулятор." << std::endl;
    std::cout << "Введите первое число:" << std::endl;
    std::cin >> num_1;

    std::cout << "Введите второе число:" << std::endl;
    std::cin >> num_2;

    std::cout << "Введите символ ('+', '-', '*', '/', '%'):" << std::endl;
    std::cin >> Symbol;

    switch (Symbol) {

        case '+':
            std::cout << "Ответ: " << num_1 + num_2 << std::endl;
            break;

        case '-':
            std::cout << "Ответ: " << num_1 - num_2 << std::endl;
            break;

        case '*':
            std::cout << "Ответ: " << num_1 * num_2 << std::endl;
            break;

        case '/':
            if (num_2 == 0) {
                std::cout << "Ошибка. На ноль делить нельзя." << std::endl;
            } else {
                std::cout << "Ответ: " << num_1 / num_2 << std::endl;
            }
            break;

        case '%':
            if (num_2 == 0) {
                std::cout << "Ошибка. На ноль делить нельзя." << std::endl;
            } else {
                std::cout << "Ответ: " << std::fmod(num_1, num_2) << std::endl;
            }
            break;

        default:
            std::cout << "Операция: " << Symbol << " не поддерживается." << std::endl;
            break;
    }
    return 0;
}