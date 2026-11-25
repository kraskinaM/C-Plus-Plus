#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int level = 2;
    bool premium = true;

    //Выведет 1 'true'. Оператор || возвращает истину, если хотя бы одно условие верно
    //Т.к premium == true, вторая часть 'level >= 3' даже не проверяется, результат равен 1

    std::cout << (premium || level >= 3) << std::endl;

    //Выведет 0 'false'. Оператор ! инвертирует значение: !premium превращает true в false.
    //Оператор && требует истинности обоих условий, первое ложно, итог равен 0.

    std::cout << (!premium && level > 5) << std::endl;

    //Первое условие 'level >= 3' ложно, так как 2 < 3, программа переходит к ветке else if 'level >= 1', т.к 2 >= 1 истинно.

    if (level >= 3)
    {
        std::cout << "верхний ярус" << std::endl;
    }
    else if (level >= 1)
    {
        std::cout << "нижний ярус" << std::endl;
    }

    switch (level)
    {
        case 1:
            std::cout << "один" << std::endl;
            break;
        case 2:
            std::cout << "два" << std::endl; //Если не будет 'break;' выполниться следущий 'case 3:'
            break;
        case 3:
            std::cout << "три" << std::endl;
            break;
        default:
            std::cout << "другое" << std::endl;
    }
    //Тернарник проверяет, достиг ли уровень значения 2 или выше, т.к 2 >= 2 'истина', оператор возвращает строку "доступ открыт" и передает её в std::cout
    std::cout << (level >= 2 ? "доступ открыт" : "доступ закрыт") << std::endl;
    return 0;
}

/*Вывод:
1
0
нижний ярус
два
доступ открыт*/