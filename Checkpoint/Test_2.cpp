#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int code = 4; //Значение '2'

    switch (code)
    {
        case 1:
            std::cout << "Эспрессо" << std::endl;
            break;
        case 2:
            std::cout << "Латте" << std::endl;   //Нету 'break;'
            break;
        case 3:
            std::cout << "Какао" << std::endl;
            break;
        case 4:   //Повторение 'case 2:'
            std::cout << "Мокко" << std::endl;
            break;
    }
    return 0;
}