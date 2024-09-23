// 8. Баги: знайдіть помилку у наведеному фрагменті програми.

// Ответ: условие равно false, цикл ни разу не отработает

int counter = 100;
while (counter < 10)
{
	cout << "counter now: " << counter;
	counter--;
}
