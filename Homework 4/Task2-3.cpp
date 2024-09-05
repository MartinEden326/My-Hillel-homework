// Проаналізуйте наступну програму.
// Уявіть, що ви ввели три значення. Який результат ви очікуєте отримати?

// Ведіть числа 20, 10 і 50.Ви отримали результат який очікували? Чому ні?

// Ответ:
// В 39 строке в условии if переменной с присваивается результат
// разницы a - b, если он не равен 0, условие считается true.
// Если ввести как предложено в задании числа 20, 10 и 50, мы получим:
// a: 20 minus b: 10 equals c: 10
// Если ввести например числа 10 10 и 50, условие if уже не будет истинной,
// переменная с будет равна 0, выполниться код из else 
// a - b does not equal c:

#include <iostream>

using namespace std;

int main()

{

int a, b, c;

cout << "Please enter three numbers) \n";

cout << "a: ";

cin >> a;

cout << "\nb: ";

cin >> b;

cout << "\nc: ";

cin >> c;

if (c = (a - b))

{

     cout << "\na: ";

     cout << a;

     cout << " minus b: ";

     cout << b;

     cout << " equals c: ";

     cout << c << endl;

}

else

     cout << "a - b does not equal c: " << endl;

return 0;

}
