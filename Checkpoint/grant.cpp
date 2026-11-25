#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    using namespace std;

    int grade, absences;

    std::cout << "Введите балл(от 0 до 10): ";
    cin >> grade;
    std::cout << "Введите количество прогулов: ";
    cin >> absences;

    if (grade < 0 || grade > 10) {
        cout << "Ошибка: балл от 0 до 10" << endl;
        return 0;
    }

    cout << ((grade >= 8 && absences <= 2) ? "Стипендия назначена" : "Стипендия не назначена") << endl;

    return 0;
}