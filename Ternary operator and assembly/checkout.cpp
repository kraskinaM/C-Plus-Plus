#include <iostream>
#include <string>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int price;
    int quantity;
    int payment;

    std::cout << "Введите цену товара: " << std::endl;
    std::cin >> price;

    std::cout << "Введите количество товаров: " << std::endl;
    std::cin >> quantity;

    if (quantity < 1) {
        std::cout << "Количество должно быть не меньше 1" << std::endl;
        return 0;
    }

    int totalSum = price * quantity;
    int discountPercent = 0;

    if (totalSum > 5000) {
        discountPercent = 10;
    } else if (totalSum > 1000) {
        discountPercent = 5;
    }

    int discountAmount = totalSum * discountPercent / 100;
    int toPay = totalSum - discountAmount;

    std::cout << "Введите внесённую сумму: " << std::endl;
    std::cin >> payment;

    std::cout << "Сумма: " << totalSum << ", скидка " << discountPercent << "%, к оплате: " << toPay << std::endl;

    if (payment >= toPay) {
        std::cout << "Оплата прошла" << std::endl;
        std::cout << "Сдача: " << payment - toPay << " руб" << std::endl;
    } else {
        std::cout << "Недостаточно средств: ещё " << toPay - payment << " руб" << std::endl;
    }

    std::string category = (toPay > 4000) ? "существенная скидка" : "обычная покупка" << std::endl;
    std::cout << "Категория: " << category << std::endl;

    return 0;
}