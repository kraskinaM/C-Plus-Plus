#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double Inches;
    double Pounds;

    std::cout << "Введите вес в фунтах: " << std::endl;
    std::cin >> Pounds;

    std::cout << "Вес в фунтах: " << Pounds << std::endl;
    std::cout << "Вес в килограммах: " << Pounds / 2.20462262 << std::endl;

    std::cout << "Введите рост в дюймах: " << std::endl;
    std::cin >> Inches;

    std::cout << "Рост в дюймах: " << Inches << std::endl;
    std::cout << "Рост в сантиметрах: " << Inches * 2.54 << std::endl;

    return 0;
}