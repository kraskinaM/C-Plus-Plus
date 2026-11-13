#include <iostream>
#include <string>
 
int main()
{
    std::string name;
    int birthYear;
    std::cout << "Введите ваше имя:";
    std::cin >> name;
    std::cout << "Введите ваш год рождения:";
    std::cin >> birthYear;
    std::cout << "Привет, " << name << "!" << std::endl;
    std::cout << "Вам примерно" << 2026 - birthYear << "лет." << std::endl;
    return 0;
}