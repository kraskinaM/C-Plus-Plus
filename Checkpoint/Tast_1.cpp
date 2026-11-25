#include <iostream>
#include <string>
#include <windows.h>

int main() 
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int age = 20;   //Было значение '15'

    if (age >= 18)       //Изначально '=>', а надо '>='
    {
        std::cout << "Вход разрешён" << std::endl;
    }else {
        std::cout << "Вход запрещён" << std::endl;
        std::cout << "Приходите в 18+" << std::endl;
    } //Табуляция, и скобки

    return 0;

}