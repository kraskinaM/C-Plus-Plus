#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int age;
    int cod;

    std::cout << "Введите ваш возраст: " << std::endl;
    std::cin >> age;

    std::cout << "Введите код пропуска: " << std::endl;
    std::cin >> cod;

    bool hasPass = (cod != 0);

    if (!hasPass) {
        std::cout << "Пропуска нет." << std::endl;
    }else {
        std::cout << "Пропуск есть!" << std::endl;
    }

    std::cout << "Взрослый: " << (age >= 18) << std::endl;
    std::cout << "Допуск в зал: " << (age >= 18 && cod != 0) << std::endl;
    std::cout << "Льгота: " << (age <= 12 || age >= 65) << std::endl;
    std::cout << "Отказ." << (cod == 0) << std::endl;
    std::cout << "Совпадение де Моргана: " << !((age < 18 || !hasPass)) << " " << (age >= 18 && hasPass) << std::endl;

    return 0;
}