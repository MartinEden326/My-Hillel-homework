// 1. Напишіть програму, яка оголошує змінну типу int, посилання на
//    значення типу int і вказівник на значення типу int. Використовуйте вказівник
//    та посилання для керування значенням змінної типу int.

#include <iostream>

int main()
{
    int number = 0;
    int &refnumber = number;
    int *pnumber = &number;
    refnumber = 10;
    std::cout << number << "\n";
    *pnumber = 20;
    std::cout << number << "\n";

    return 0;
}