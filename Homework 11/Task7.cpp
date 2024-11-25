// 7. Жучки: що є неправильним у наступному прикладі використання оператора сумування?

// Ответ: не правильно написано тело, правильная запись:

//  VeryShort VeryShort::operator+(const VeryShort &rhs)
// {
//      return VeryShort(itsVal + rhs.GetItsVal());
// }  

VeryShort VeryShort::operator+(const VeryShort &rhs)
{
	itsVal += rhs.GetItsVal();
	return *this;
}   
