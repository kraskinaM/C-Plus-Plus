#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double Kilometers;
    double Watch;

    std::cout << "Введите растояние в километрах:" << std::endl;
    std::cin >> Kilometers;

    std::cout << "Введите время в часах:" << std::endl;
    std::cin >> Watch;

    std::cout << "Растояние и время:" << Kilometers << " и " << Watch << std::endl;
    std::cout << "Скорость:" << Kilometers / Watch << std::endl;

    return 0;
}