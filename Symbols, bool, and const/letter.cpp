#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    char c;
    std::cout << "Введите заглавную латинскую букву: ";
    std::cin >> c;

    char next = c + 1;

    std::cout << "Буква: " << c << "\n";
    std::cout << "Следующая: " << next << "\n";

    return 0;
}