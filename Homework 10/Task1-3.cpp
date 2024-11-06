// 1. Представте оголошення класу SimpleCircle (просте коло)
// з єдиною зміною-членом його Radius (радіус). У класі
// повинні використовуватися конструктор та деструктор, задані
// за умовчанням, а також метод встановлення радіусу.

// 2. Використовуючи клас, створений у вправі 1, за допомогою конструктора,
// заданого за замовчуванням, ініціалізуйте змінну його Radius значенням 5.

// 3. Додайте до класу новий конструктор, який надає значення свого параметра
// змінної його itsRadius.

#include <iostream>

class SimpleCircle
{
public:
    SimpleCircle() : itsRadius(5) {}
    SimpleCircle(int radius) : itsRadius(radius) {}
    ~SimpleCircle() {}
    void SetRadius(int diameter);
    int GetRadius() const { return itsRadius; }

private:
    int itsRadius;
};

void SimpleCircle::SetRadius(int diameter)
{
    itsRadius = diameter / 2;
    std::cout << "Radius = " << itsRadius << std::endl;
}

int main()
{
    SimpleCircle theCircle1;
    std::cout << theCircle1.GetRadius() << std::endl;
    int radius, diameter;
    std::cout << "Enter radius: " << std::endl;
    std::cin >> radius;
    SimpleCircle theCircle2(radius);
    std::cout << theCircle2.GetRadius() << std::endl;
    std::cout << "Enter diameter: " << std::endl;
    std::cin >> diameter;
    theCircle2.SetRadius(diameter);
    std::cout << theCircle2.GetRadius() << std::endl;

    return 0;
}