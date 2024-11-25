// 8. Запишіть оголошення класу Square, успадкованого від класу Rectangle,
//    який, у свою чергу, виготовлений від класу Shape.

// 9. Припустимо, що у попередньому прикладі об'єкт класу Shape не використовує
//    параметри, об'єкт класу Rectangle приймає два параметри (length і width),
//    а об'єкт класу Square - один параметр (length); запишіть конструктор класу
//    Square.

#include <iostream>

class Shape
{
public:
    Shape() {};
    ~Shape() {};
};

class Rectangle : public Shape
{
public:
    Rectangle() : Shape(), length(6), width(7) {};
    Rectangle(int itsLength, int itsWidth) : Shape(), length(itsLength), width(itsWidth) {};
    Rectangle(int itsLength) : Shape(), length(itsLength), width(7) {};
    ~Rectangle() {};
    int GetLength() const { return length; };
    void SetLength(int itsLength) { length = itsLength; };
    int GetWidth() const { return width; };
    void SetWidth(int itsWidth) { width = itsWidth; };

protected:
    int length;
    int width;
};

class Square : public Rectangle
{
public:
    Square() : Rectangle() {};
    Square(int itsLength) : Rectangle(itsLength) {};
    ~Square() {};
};

int main()
{
    Square form1(15);
    std::cout << form1.GetLength();

    return 0;
}
