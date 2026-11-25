#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int num = 2147483647;

    std::cout << "Было: " << num << '\n';
    std::cout << "Стало: " << num - 4294967294 << '\n';
    std::cout << "Удвоение: " << num * 2 << '\n';

    return 0;
}
