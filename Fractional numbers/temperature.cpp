#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double celsius;
    std::cout << "Цельсий: ";
    std::cin >> celsius;

    double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
    std::cout << "Фаренгейт: " << fahrenheit << "\n";

    double fahrenheit_input;
    std::cout << "Фаренгейт: ";
    std::cin >> fahrenheit_input;

    double celsius_result = (fahrenheit_input - 32.0) * 5.0 / 9.0;
    std::cout << "Цельсий: " << celsius_result << "\n";

    int scale = 9 / 5;
    double broken_fahrenheit = celsius * scale + 32.0;

    std::cout << "Испорченная прямая формула: " << broken_fahrenheit << "\n";

    return 0;
}