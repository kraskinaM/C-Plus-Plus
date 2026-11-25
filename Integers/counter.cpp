#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    long long result = 20LL * 365 * 24 * 3600 * 1000;

    std::cout << "Миллисекунд за 20 лет:" << result << std::endl;

    return 0;
}
