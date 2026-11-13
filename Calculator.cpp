#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    std::cout << "Введите два числа" << std::endl;

    std::cout << "Введите 1 число:" << std::endl;
    double a;
    std::cin >> a;

    std::cout << "Введите 2 число:" << std::endl;
    double b;
    std::cin >> b;

    std::cout << "Выберите тип: '-' '+' '*' '/' " << std::endl;
    char c;
    std::cin >> c;

    if (c == '-')
    {
        std::cout << "Результат: " << a - b << std::endl;
    }
    else if (c == '+')
    {
        std::cout << "Результат: " << a + b << std::endl;
    }
    else if (c == '*')
    {
        std::cout << "Результат: " << a * b << std::endl;
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            std::cout << "Ошибка: на ноль делить нельзя!" << std::endl;
        }
        else
        {
            std::cout << "Результат: " << a / b << std::endl;
        }
    }
    else
    {
        std::cout << "Ошибка, введите число." << std::endl;
    }

    return 0;
}