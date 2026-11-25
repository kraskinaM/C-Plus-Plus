#include <iostream>
#include <string>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Record = 3000;
    std::string Name;
    int Glasses;
    int Level;
    double Time;

    std::cout << "Введите имя: " << std::endl;
    std::cin >> Name;

    std::cout << "Введите количество очков: " << std::endl;
    std::cin >> Glasses;

    std::cout << "Введите свой уровень: " << std::endl;
    std::cin >> Level;

    std::cout << "Введите колчисетво часов: " << std::endl;
    std::cin >> Time;


    int level = Glasses / 1000;
    int progress = static_cast<int>((Glasses % 1000) / 1000.0 * 100 + 0.5);
    long long milliseconds = static_cast<long long>(Time * 3600 * 1000 + 0.5);
    char rank = static_cast<char>('D' - level);
    bool isRecordBroken = Glasses > Record;

    std::cout << "Игрок: " << Name << std::endl;
    std::cout << "Очки: " << Glasses << ", уровень: " << level << std::endl;
    std::cout << "Прогресс до уровня " << level + 1 << ": " << progress << "%" << std::endl;
    std::cout << "Миллисекунд в игре: " << milliseconds << std::endl;
    std::cout << "Ранг: " << rank << std::endl;
    std::cout << "Рекорд побит: " << isRecordBroken << std::endl;

    return 0;
}