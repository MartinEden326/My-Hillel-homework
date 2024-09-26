// 2. Допустимо, в програмі оголошена змінна yourAge типу unsigned short.
//    Як оголосити вказівник, що дозволяє маніпулювати цією змінною?

// 3. За допомогою вказівника присвойте змінній вашого значення 50.

#include <iostream>

int main()
{
    unsigned short yourAge = 0;
    unsigned short *pyourAge = &yourAge;
    *pyourAge = 50;
    std::cout << yourAge;

    return 0;
}