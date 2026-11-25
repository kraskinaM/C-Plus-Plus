#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double value = -2.7;
    std::cout << static_cast<int>(value) << std::endl;
    std::cout << static_cast<char>(68 + 3) << std::endl;
    std::cout << static_cast<int>('D') << std::endl;
    std::cout << 17 / 5 << " " << 17.0 / 5 << std::endl;
    return 0;
}

/*Вывод:
-2
G
68
3 3.4*/