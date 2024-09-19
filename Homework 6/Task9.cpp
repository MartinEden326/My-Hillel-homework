// 9. Баги: які три помилки виявить компілятор у цьому коді?

// Ответ:
// 1. Строка 20, нельзя получить доступ к полю private
// 2. Строка 21, нельзя инициализировать не обьект
// 3. Строка 22, не предусмотрен нужный конструктор

class TV
{
public:
    void SetStation(int Station);
    int GetStation() const;

private:
    int itsStation;
};
main()
{
    TV myTV;
    myTV.itsStation = 9;
    TV.SetStation(10);
    TV myOtherTV(2);
}
