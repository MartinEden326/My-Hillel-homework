// 2. Створіть вкладений цикл for, що заповнює нулями масив розміром 10×10.

#include <iostream>

int main()
{
    int numbers[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            numbers[i][j] = 0;
            std::cout << numbers[i][j];
        }
        std::cout << "\n";
    }

    return 0;
}