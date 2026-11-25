#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int score = 82;
    std::cout << (score >= 60 ? "сдан" : "не сдан") << std::endl;     //Не был в скобка '() - (score >= 60 ? "сдан" : "не сдан")' тем самым ошибка
    std::cout << (score >= 90 ? "отлично" : "хорошо") << std::endl;   //Поменять местами вывод
    return 0;
}