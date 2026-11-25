#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int a;
    int b;

    std::cout << "Введите 1 число:" << std::endl;
    std::cin >> a;

    std::cout << "Введите 2 число:" << std::endl;
    std::cin >> b;

    std::cout << "Сравнение: " << (a == b) << std::endl;
    std::cout << "Сравнение: " << (a != b) << std::endl;
    std::cout << "Сравнение: " << (a > b) << std::endl;
    std::cout << "Сравнение: " << (a < b) << std::endl;
    std::cout << "Сравнение: " << (a >= b) << std::endl;
    std::cout << "Сравнение: " << (a <= b) << std::endl;

    return 0;
}