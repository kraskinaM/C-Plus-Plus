#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int number;

    std::cout << "Двузначное число: ";
    std::cin >> number;

    int tens = number / 10;
    int units = number % 10;

    std::cout << "Цифры: " << tens << " и " << units << std::endl;

    return 0;
}