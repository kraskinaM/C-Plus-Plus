#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);

    bool a = false;
    bool b = false;

    a = false;
    b = false;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " ||=" << (a || b);

    a = false;
    b = true;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " ||=" << (a || b);

    a = true;
    b = false;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " ||=" << (a || b);

    a = true;
    b = true;
    std::cout << "A=" << a << " B=" << b << " &&=" << (a && b) << " ||=" << (a || b);

    return 0;
}
