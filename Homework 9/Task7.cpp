// 7. Виправте програму із вправи 6.

#include <iostream>

int main()
{
    char *pointer = nullptr;
    for (int i = 0; i < 100; i++)
    {
        pointer = new char[100];
        delete [] pointer;
    }

    return 0;
}