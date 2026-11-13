#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Введите три оценки:" << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;

    // Разность между ними в том, что в первом случае идет приблизительная оценка, а во втором — уже точная.

    std::cout << (a + b + c) / 3 << std::endl;
    std::cout << (a + b + c) / 3.0 << std::endl;

    return 0;
}