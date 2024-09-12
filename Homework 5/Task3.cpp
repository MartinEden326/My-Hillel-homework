// Баги: що неправильно у цій функції?

// Функция типа void не может ничего возвращать
// В строке 13 не правильно указан аргумент передаваемый параметрам функции

#include <iostream>
using namespace std;

void myFunc(unsigned short int x);
int main()
{
    unsigned short int x, y;
    y = myFunc(int);
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)
{
    return (4 * x);
}
