// Запишіть прототип для функції з ім'ям Perimeter, яка повертає значення
// типу unsigned long int та приймає два параметри типу unsigned short int.

// Запишіть визначення функції Perimeter згідно з оголошенням у вправі 1.
// Два параметри, що нею приймаються, представляють довжину і ширину прямокутника,
// а функція повертає його периметр (подвоєна довжина плюс подвоєна ширина).

#include <iostream>

unsigned long int Perimeter(unsigned short int length, unsigned short int width);

int main()
{
    unsigned short int length = 7, width = 5;
    std::cout << Perimeter(length, width);

    return 0;
}

unsigned long int Perimeter(unsigned short int length, unsigned short int width)
{
    return (2 * (length + width));
}