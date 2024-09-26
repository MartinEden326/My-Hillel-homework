// 6. Жучки: знайдіть помилку у наступному фрагменті програми.

// Ответ: Ошибка при попытке присвоить адресу значение типа int,
// корректной была бы запись *pVar = 9;

#include <iostream>

using namespace std;

int main()
{
	int SomeVariable = 5;
	cout << "SomeVariable: " << SomeVariable << "\n";
	int *pVar = &SomeVariable;
	pVar = 9;
	cout << "SomeVariable: " << *pVar << "\n";
	return 0;
}
