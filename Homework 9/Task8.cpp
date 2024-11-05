// 8. Жучки: що неправильно у цій програмі?

// Ответ: проблема с очищением памяти
// Нельзя написать delete Boots, так как Boots не указатель
// Как вариант можно сделать так:
// Cat *pBoots = &Boots;
// delete pBoots;
// Правильный по моему мнению вариант представлен в задании N9

#include <iostream>

using namespace std;

class Cat
{
public:
	Cat(int age) { itsAge = age; }
	~Cat() {}
	int GetAge() const { return itsAge; }

private:
	int itsAge;
};

Cat &MakeCat(int age);

int main()
{
	int age = 7;
	Cat Boots = MakeCat(age);
	cout << "Boots is: " << Boots.GetAge() << " years old" << endl;
	return 0;
}

Cat &MakeCat(int age)
{
	Cat *pCat = new Cat(age);
	return *pCat;
}
