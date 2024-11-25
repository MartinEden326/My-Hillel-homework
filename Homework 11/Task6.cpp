// 6. Жучки: що неправильно у наступному прикладі використання оператора присвоєння?

// Ответ: возвращать нужно по ссылке а не по значению, правильная запись:
// SQUARE &SQUARE::operator=(const SQUARE &rhs)
// Также проблема в теле, выделать память не нужно
// По хорошему еще нужна проверка на равенство:
// if(this == &rhs) return *this;

SQUARE SQUARE::operator=(const SQUARE &rhs)
{
	itsSide = new int;
	*itsSide = rhs.GetSide();
	return *this:
}   
