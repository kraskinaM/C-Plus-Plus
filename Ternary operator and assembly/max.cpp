#include <iostream>
#include <string>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    long long Num_1, Num_2;

    std::cout << "Введите 1 число: " << std::endl;
    std::cin >> Num_1;
    std::cout << "Введите 2 число: " << std::endl;
    std::cin >> Num_2;

    long long maxVal = (Num_1 > Num_2) ? Num_1 : Num_2;

    std::string result = (Num_1 > Num_2) ? "Больше первое число" : (Num_2 > Num_1) ? "Больше второе число" : "Числа равны";

    std::cout << "Максимум: " << maxVal << std::endl;
    std::cout << result << std::endl;

    return 0;
}