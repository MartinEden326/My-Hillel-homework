// Напишіть функцію, яка приймає два параметри типу unsigned short int
// і повертає результат ділення першого параметра на другий.
// Функція не повинна виконувати операцію поділу, якщо друге число дорівнює нулю,
// але в цьому випадку вона має повернути значення -1.

// Напишіть програму, яка запитує у користувача два числа і викликає функцію,
// записану при виконанні вправи 5. Виведіть результат або повідомлення про
// помилку, якщо функція поверне значення, що дорівнює - 1.

// Во избежании потерь данных при делении, сделал функцию типа double

#include <iostream>

double myFunc(unsigned short int x, unsigned short int y);

int main()
{
    int x, y;
    std::cout << "Enter 2 numbers" << std::endl;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    if (myFunc(x, y) == -1)
        std::cout << "Error, y = 0" << std::endl;
    else
        std::cout << "x/y = " << myFunc(x, y);

    return 0;
}

double myFunc(unsigned short int x, unsigned short y)
{
    if (y == 0)
        return -1;
    return double(x) / double(y);
}