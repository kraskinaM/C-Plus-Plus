#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);

    double num;

    std::cout << "Введите число: " << std::endl;
    std::cin >> num;

    if ( num >= 1) {
        std::cout << "Число положительное." << std::endl;
    }else if (num <= -1){
        std::cout << "Число отрицательное." << std::endl;
    }else {
        std::cout << "Число = 0." << std::endl;
    }

    return 0;

}