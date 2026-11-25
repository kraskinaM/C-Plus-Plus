#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Day;

    std::cout << "Введите номер дня недели:" << std::endl;
    std::cin >> Day;

    switch(Day) {
        case 1:
            std::cout << "Понедельник." << std::endl;
            break;
        case 2:
            std::cout << "Вторник." << std::endl;
            break;
        case 3:
            std::cout << "Среда." << std::endl;
            break;
        case 4:
            std::cout << "Четверг." << std::endl;
            break;
        case 5:
            std::cout << "Пятница." << std::endl;
            break;
        case 6:
            std::cout << "Суббота." << std::endl;
            break;
        case 7:
            std::cout << "Воскресенье." << std::endl;
            break;
        default:
            std::cout << "Нет такого дня." << std::endl;
            break;

    }
    return 0;
}