#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int x = 5;

    std::cout << ((0 < x) < 10) << std::endl;
    std::cout << (x > 0 && x < 10) << std::endl;

    int y = -5;

    std::cout << ((0 < y) < 10) << std::endl;
    std::cout << ((0 < y) < 10) << std::endl;

    return 0;
}