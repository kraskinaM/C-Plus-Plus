#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    //В типе int 32 бита (4 байта), а его диапазон от -2 147 483 648 до 2 147 483 647,
    //Т.к 1 бит отводится под знак, а оставшийся 31 бит позволяет закодировать 2^31 отрицательных и 2^31 - 1 положительных значений.

    std::cout << "int: " << sizeof(int) << '\n';
    std::cout << "double: " << sizeof(double) << '\n';
    std::cout << "char: " << sizeof(char) << '\n';
    std::cout << "bool: " << sizeof(bool) << '\n';

    return 0;

}