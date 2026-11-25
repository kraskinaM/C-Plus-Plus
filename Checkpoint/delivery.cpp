#include <iostream>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    using namespace std;

    int weight, zone, urgency;
    std::cout << "Введите вес: ";
    cin >> weight;
    std::cout << "Введите зону: ";
    cin >> zone;
    std::cout << "Введите срочность: ";
    cin >> urgency;

    if (weight < 1) {
        cout << "Ошибка: вес должен быть не меньше 1" << endl;
        return 0;
    }

    int total = 0;

    switch (zone) {
        case 1:
            total = 50;
            break;
        case 2:
            total = 120;
            break;
        case 3:
            total = 250;
            break;
        default:
            cout << "Ошибка: зоны с кодом " << zone << " нет" << endl;
            return 0;
    }

    if (weight > 10) {
        total += 200;
    } else if (weight > 5) {
        total += 100;
    }

    if (urgency == 1) {
        total += 150;
    }

    cout << "К оплате: " << total << " руб" << endl;
    cout << ((weight > 5 && urgency == 1) ? "Груз: тяжёлый срочный" : "Груз: стандартный") << endl;

    return 0;
}

/*
1.Без проверки при весе 0 и зоне 1 программа не выдаст ошибку, а посчитает и выведет обычную цену для зоны 1.
2.Условие weight > 5: Его мало, так как статус зависит ещё и от зоны. Опровергает тест с комбинацией 'тяжёлый вес (>5) + другая зона'
*/