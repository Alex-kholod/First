#include "Header.h"

void vector::multiplication()
{
	cout << "x * y = " << this->GetX() * this->GetY() << endl;
}

void vector::vector_length()
{
	cout << "����� ������� = " << sqrt(this->GetX() * this->GetX() + this->GetY() * this->GetY()) << endl;
}

void circle::square()
{
	cout << "������� ����� = " << 3.14 * this->GetR() * this->GetR() << endl;
}

void circle::circle_length()
{
	cout << "����� ���������� = " << 2 * 3.14 * this->GetR() << endl;
}