#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char command;
    std::cout << "Введите символ ('w', 'a', 's', 'd', 'q', 'x'): ";
    std::cin >> command;

    switch (command) {
        case 'w':
            std::cout << "Вперёд";
            break;
        case 'a':
            std::cout << "Влево";
            break;
        case 's':
            std::cout << "Назад";
            break;
        case 'd':
            std::cout << "Вправо";
            break;
        case 'q':
        case 'x':
            std::cout << "Выход из программы";
            break;
        default:
            std::cout << "Неизвестная команда";
            break;
    }
    return 0;
}