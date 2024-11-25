// 1. Перевантажте оператори преінкремента та постінкремента для використання
//    у вашому класі SimpleCircle зі змінною itsRadius.

// 2. Змініть SimpleCircle таким чином, щоб зберігати itsRadius в динамічній
//    області пам'яті і фіксувати існуючі методи.

// 3. Створіть у класі SimpleCircle конструктор-копіювальник.

// 4. Перевантажте у класі SimpleCircle оператор присвоєння.

// 5. Напишіть програму, яка створює два об'єкти класу SimpleCircle. Для створення
//    одного об'єкта використовуйте конструктор, заданий за замовчуванням, а
//    другому екземпляру при оголошенні надайте значення 9. З кожним із об'єктів
//    використовуйте оператор інкремента та виведіть отримані значення на друк.
//    Нарешті, надайте значення одного об'єкта іншому об'єкту та виведіть
//    результат на друк.

#include <iostream>

class SimpleCircle
{
public:
    SimpleCircle();
    SimpleCircle(int radius);
    SimpleCircle(const SimpleCircle &);
    ~SimpleCircle();
    void SetRadius(int diameter);
    int GetRadius() const { return *itsRadius; }
    const SimpleCircle &operator++();
    const SimpleCircle operator++(int);
    SimpleCircle &operator=(const SimpleCircle &);

private:
    int *itsRadius;
};

SimpleCircle::SimpleCircle()
{
    itsRadius = new int;
    *itsRadius = 5;
}

SimpleCircle::SimpleCircle(int radius)
{
    itsRadius = new int;
    *itsRadius = radius;
}

SimpleCircle::SimpleCircle(const SimpleCircle &rhs)
{
    itsRadius = new int;
    *itsRadius = rhs.GetRadius();
}

SimpleCircle::~SimpleCircle()
{
    delete itsRadius;
    itsRadius = nullptr;
}

const SimpleCircle &SimpleCircle::operator++()
{
    ++(*itsRadius);
    return *this;
}

const SimpleCircle SimpleCircle::operator++(int)
{
    SimpleCircle temp(*this);
    ++(*itsRadius);
    return temp;
}

SimpleCircle &SimpleCircle::operator=(const SimpleCircle &rhs)
{
    if(this == &rhs) return *this;
    *itsRadius = rhs.GetRadius();
    return *this;
}

void SimpleCircle::SetRadius(int diameter)
{
    *itsRadius = diameter / 2;
    std::cout << "Radius = " << *itsRadius << std::endl;
}

int main()
{
    SimpleCircle theCircle1, theCircle2(9);
    ++theCircle1;
    std::cout << "theCircle1 radius: " << theCircle1.GetRadius() << std::endl;
    theCircle2++;
    std::cout << "theCircle2 radius: " << theCircle2.GetRadius() << std::endl;
    theCircle1 = theCircle2;
    std::cout << "theCircle1 radius: " << theCircle1.GetRadius() << std::endl;
    std::cout << "theCircle2 radius: " << theCircle2.GetRadius() << std::endl;

    return 0;
}
