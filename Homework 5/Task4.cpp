// Баги: що неправильно у цій функції?

// В строке 18 не нужно в конце писать ;
// ; используется только в случае прототипа функции как в 9 строке

#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y;
    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x);
{
    return (4 * x);
}
