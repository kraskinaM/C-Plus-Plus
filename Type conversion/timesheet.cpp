#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double Time;
    int Hourly_Rate;

    std::cout << "Введите время: " << std::endl;
    std::cin >> Time;

    std::cout << "Введите часовую ставку: " << std::endl;
    std::cin >> Hourly_Rate;

    int Whole_Hours = static_cast<int>(Time);
    double Remaining_Hours = Time - Whole_Hours;
    int Minutes = static_cast<int>(Remaining_Hours * 60 + 0.5);

    if (Minutes == 60) {
        Whole_Hours += 1;
        Minutes = 0;
    }

    double Total_Earnings = Time * Hourly_Rate;
    int Total_Kopecks = static_cast<int>(Total_Earnings * 100 + 0.5);
    int Rubles = Total_Kopecks / 100;
    int Kopecks = Total_Kopecks % 100;

    std::cout << "Часы: " << Time << ", ставка: " << Hourly_Rate << std::endl;
    std::cout << "Время: " << Whole_Hours << " ч " << Minutes << " мин" << std::endl;
    std::cout << "Заработок: " << Rubles << " руб " << Kopecks << " коп" << std::endl;

    return 0;
}