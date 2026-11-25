#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << 'A' << std::endl;

    std::cout << 'A' + 1 << std::endl;

    std::cout << 'a' << std::endl;

    std::cout << '0' << std::endl;

    std::cout << 0 << std::endl;

    return 0;
}