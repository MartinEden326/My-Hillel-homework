// 1. Запишіть віртуальний конструктор-копіювальник для класу Square.

// Ответ:
// Square(const Square &rhs) : Rectangle(rhs) {};
// virtual Rectangle *Clone() { return new Square(*this); }

class Square : public Rectangle {};
