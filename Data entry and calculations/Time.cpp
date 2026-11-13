#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Введите количество минут:" << std::endl;
    double Minute;
    std::cin >> Minute;

    double Hour = 60;

    if (Minute / Hour)
    {
        std::cout << "Результат: " << Minute / Hour << "Часов" << Hour / Minute <<"Минут" << std::endl;
    }
    return 0;
}