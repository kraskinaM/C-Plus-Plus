#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    //Оператор && требует истинности обеих частей, поэтому '1 && 0' даёт 0. Оператор || требует истинности, поэтому '1 || 0' даёт 1.
    
    std::cout << "1) " << (5 > 3 && 8 < 6) << " " << (5 > 3 || 8 < 6) << std::endl;

    int age = 5;
    if (age == 18) //Оператор присваивания '=' вместо сравнения '==' внутри if
    {
        std::cout << "2) ветка выполнилась" << std::endl;
    }
    std::cout << "2) age = " << age << std::endl; // выведет 5

    int x = -5;
    std::cout << "3) " << (0 < x && x < 10) << " " << (x > 0 && x < 10) << std::endl;  //Цепочка сравнений '0 < x < 10' вместо логического И

    int a = 16;
    bool hasPass = true;
    std::cout << "4) " << !(a >= 18 && hasPass) << " " << (a < 18 || !hasPass) << std::endl;

    a = 25;
    std::cout << "4) " << !(a >= 18 && hasPass) << " " << (a < 18 || !hasPass) << std::endl;

    return 0;
}