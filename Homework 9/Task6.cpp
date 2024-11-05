// 6. Напишіть програму, яка призводить до витоку пам'яті.

#include <iostream>

int main()
{
    char *pointer = nullptr;
    for (int i = 0; i < 100; i++)
    {
        pointer = new char[100];
    }

    return 0;
}