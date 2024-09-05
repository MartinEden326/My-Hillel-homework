// Напишіть один оператор if, який перевіряє дві цілі численні
// змінні і присвоює змінній з більшим значенням менше значення,
// використовуючи лише один додатковий оператор else.
#include <iostream>

int main()
{
    int number1, number2;
    std::cout << "\nEnter number 1: \n";
    std::cin >> number1;
    std::cout << "\nEnter number 2: \n";
    std::cin >> number2;
    if (number1 > number2)
    {
        std::cout << "\n number 1 > number 2 \n number 1 = number 2 \n";
        number1 = number2;
    }
    else
    {
        std::cout << "\n number 2 > number 1 \n number 2 = number 1 \n";
        number2 = number1;
    }

    return 0;
}