#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double a = 7.9;
    double b = 7.3;
    double c = -7.9;
    double d = -7.3;

    std::cout << a << " -> " << static_cast<int>(a) << std::endl;
    std::cout << b << " -> " << static_cast<int>(b) << std::endl;
    std::cout << c << " -> " << static_cast<int>(c) << std::endl;
    std::cout << d << " -> " << static_cast<int>(d) << std::endl;

    return 0;
}