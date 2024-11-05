// 4. Напишіть програму, яка створює блукаючий вказівник.

#include <iostream>

int main()
{
    int number = 10;
    int *pnumber; // неинициализированный указатель
    *pnumber = number; // неизвестно куда именно было присвоенно значение number
    std::cout << *pnumber << "\n";

    return 0;
}