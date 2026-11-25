#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    int goals = 27 ; //Пропущена скоба ';'
    double avgGoals = static_cast<double>(goals) / 8; //В методе static_cast была пропущена 'i'
    std::cout << "Всего голов: " << goals << std::endl;
    std::cout << "Среднее за матч: " << avgGoals << std::endl;
    std::cout << "Мячей сыграно: " << static_cast<int>(8.9) << std::endl; //Пропущена скобка '>'
    return 0;
    
}