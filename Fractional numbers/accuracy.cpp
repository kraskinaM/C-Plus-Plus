#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double sum = 0.1 + 0.2;
    std::cout << "Сумма: " << sum << std::endl;

    double Third = 1.0 / 3.0;
    std::cout << "Треть: " << Third << std::endl;

    return 0;
}