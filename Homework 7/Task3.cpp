// 3. Організуйте цикл for, лічильник якого змінюється від 100 до 200 з кроком 2.

#include <iostream>

int main()
{
    int numbers[10][10];

    for (int i = 100; i < 200; i += 10)
    {
        for (int j = 100; j < 200; j += 10)
        {
            numbers[(i - 100) / 10][(j - 100) / 10] = 0;
            std::cout << numbers[(i - 100) / 10][(j - 100) / 10];
        }
        std::cout << "\n";
    }

    return 0;
}