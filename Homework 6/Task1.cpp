// 1.Напишіть програму, яка запитує число та показник ступеня.
//   Напишіть рекурсивну функцію, яка зводить число в ступінь шляхом
//   багаторазового множення числа на себе, тобто. якщо число дорівнює 2,
//   а показник ступеня дорівнює 4, то ця функція має повернути число 16.

#include <iostream>

int degreeFunc(int number, int degree);

int main()
{
    int number, degree;
    std::cout << "\nEnter number: ";
    std::cin >> number;
    std::cout << "Enter degree: ";
    std::cin >> degree;
    std::cout<<"The number "<<number<<" to the degree "<<degree;
    std::cout<<" is equal to "<<degreeFunc(number,degree);

    return 0;
}

int degreeFunc(int number, int degree)
{
    if (degree > 0)
        return number * degreeFunc(number, degree - 1);
    return 1;
}