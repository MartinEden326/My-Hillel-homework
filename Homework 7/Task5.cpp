// 5. Організуйте цикл do… while, лічильник якого змінюється від 100 до 200 з кроком 2.

#include <iostream>

int main()
{
    int numbers[10][10];
    int i = 100, j = 100;

    do
    {
        while (j < 200)
        {
            numbers[(i - 100) / 10][(j - 100) / 10] = 0;
            std::cout << numbers[(i - 100) / 10][(j - 100) / 10];
            j += 10;
        }
        std::cout << "\n";
        i += 10;
        j = 100;
    } while (i < 200);

    return 0;
}