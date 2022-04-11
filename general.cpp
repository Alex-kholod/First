#include "Header.h"

double Vector::multiplication()
{
	double t = this->GetX() * this->GetY();
	cout << "x * y = " << t << endl;
	return t;
}

double Vector::vector_length()
{
	double t = sqrt(this->GetX() * this->GetX() + this->GetY() * this->GetY());
	cout << "Длина вектора = " << t << endl; 
	return t;
}

double Circle::square()
{
	double t = 3.14 * this->GetR() * this->GetR();
	cout << "Площадь круга = " << t << endl;
	return t;
}

double Circle::circle_length()
{
	double t = 2 * 3.14 * this->GetR();
	cout << "Длина окружности = " << t << endl;
	return t;
}
Complex Complex::sum(Complex a)
{
	double x = this->GetRE() + a.GetRE();
	double y = this->GetIM() + a.GetIM();
	Print(x, y);
	Complex z;
	z.SetRE(x);
	z.SetIM(y);
	return z;
}
Complex Complex::difference(Complex a)
{
	double x = this->GetRE() - a.GetRE();
	double y = this->GetIM() - a.GetIM();
	Print(x, y);
	Complex z;
	z.SetRE(x);
	z.SetIM(y);
	return z;
}

Complex Complex::multip(Complex a)
{
	double x = this->GetRE() * a.GetRE() - this->GetIM() * a.GetIM();
	double y = this->GetRE() * a.GetIM() + this->GetIM() * a.GetRE();
	Complex z;
	z.SetRE(x);
	z.SetIM(y);
	return z;
}
double Complex::division(Complex a)
{
	double x = this->GetRE() * a.GetRE() - this->GetRE() * a.GetIM() + a.GetRE() * this->GetIM() + this->GetIM() * a.GetIM();
	double y = a.GetRE() * a.GetRE() - a.GetRE() * a.GetIM() + a.GetRE() * a.GetIM() + a.GetIM() * a.GetIM();
	cout << x / y << endl;
	return x / y;
}

void Print(double x, double y)
{
	if (x == 0) cout << y << "i" << endl;
	else if (y < 0) cout << x << y << "i" << endl;
	else if (y > 0) cout << x << "+" << y << "i" << endl;
	else cout << x << endl;
}

//void print(Complex a)
//{
//	if (a.im >= 0) cout << a.re << "+" << a.im << "i" << endl;
//	else cout << a.re << a.im << "i" << endl;
//}
//
//double absolute(Complex a)
//{
//	return sqrt(a.re * a.re + a.im * a.im);
//}