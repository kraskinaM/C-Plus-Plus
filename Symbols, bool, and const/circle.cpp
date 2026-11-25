#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    const double PI = 3.14159;
    double r;

    std::cout << "Введите радиус: ";
    std::cin >> r;

    double area = r * r * PI;

    std::cout << "Радиус: " << r << "\n";
    std::cout << "Площадь: " << area << std::endl;

    return 0;
}