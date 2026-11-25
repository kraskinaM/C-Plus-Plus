#include <iostream>
#include <windows.h>

int main() {

    //Ветвли исправлены

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int group = 1;
    int score = 9;

    if (group == 1) {
        if (score >= 8) {
            std::cout << "Утренняя смена, допуск есть" << std::endl;
        } else {
            std::cout << "Утренняя смена, допуска нет" << std::endl;
        }
    } else {
        std::cout << "Вечерняя смена" << std::endl;
    }

    return 0;
}