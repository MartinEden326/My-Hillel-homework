// 5. Виправте програму з вправи 4, щоб виправити блукаючий вказівник.

#include <iostream>

int main()
{
    int number = 10;
    int *pnumber = &number;
    *pnumber = 20;
    std::cout << *pnumber << "\n"; 

    return 0;
}