#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    long long Num;

    std::cout << "Введите число:" << std::endl;
    std::cin >> Num;

    if (Num % 2 == 0) {
        std::cout << "Четное число." << std::endl;
    }else {
        std::cout << "Не четное число." << std::endl;
    }

    return 0;
}