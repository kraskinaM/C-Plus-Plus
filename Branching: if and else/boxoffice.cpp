#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int Ticket;
    int Price;
    int Age;
    int UserPin;
    const int PIN = 12345;

    std::cout << "Введите код: " << std::endl;
    std::cin >> UserPin;

    if (UserPin == PIN) {
        std::cout << "Верный код!" << std::endl;
    }else{
        std::cout << "Неверный код!" << std::endl;
        return 0;
    }

    std::cout << "Введите возраст: " << std::endl;
    std::cin >> Age;

    if (Age <= 12) {
        std::cout << "Категория: " << "Детский " << (Price = 100) << " Rub." << std::endl;
    }else if (Age <= 17) {
        std::cout << "Категория: " << "Школьный " << (Price = 150) << " Rub." << std::endl;
    }else if (Age >= 18) {
        std::cout << "Категория: " << "Взрослый " << (Price = 250) << " Rub." << std::endl;
    }else if (Age >= 65) {
        std::cout << "Категория: " << "Пенсионный " << (Price = 120) << " Rub." << std::endl;
    }

    std::cout << "Введите количество билетов: " << std::endl;
    std::cin >> Ticket;

    if (Ticket <= 1) {
        std::cout << "Количество должно быть не меньше 1." << std::endl;
    }else {
        std::cout << "К оплате: " << Price * Ticket << std::endl;
    }
    return 0;
}