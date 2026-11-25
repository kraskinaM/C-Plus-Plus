#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    long CityPopulation;
    long TheCountrysPopulation;

    std::cout << "Введите население город:" << std::endl;
    std::cin >> CityPopulation;
    std::cout << "Введите население страны:" << std::endl;
    std::cin >> TheCountrysPopulation;
    std::cout << "Итог:" << CityPopulation + TheCountrysPopulation << std::endl;
    std::cout << "Население Земли: 8100000000" << std::endl;

    return 0;
}