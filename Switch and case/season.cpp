#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Month;

    std::cout << "Введите номер месяца:" << std::endl;
    std::cin >> Month;

    switch(Month) {
        case 1:
        case 2:
        case 12:
            std::cout << "Зима." << std::endl;
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Весна." << std::endl;
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Лето." << std::endl;
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Осень." << std::endl;
            break;
        default:
            std::cout << "Нет такого месяца." << std::endl;
            break;
    }
    return 0;
}