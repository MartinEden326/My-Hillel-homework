// 1. Оголосіть двомірний масив, який представляє поле для ірги в
// хрестики і нулики.

// 2. Запишіть програмний код, який ініціалізує значенням 0 всі елементи
// створеного перед цим масиву.

#include <iostream>

int main()
{
    int board[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}