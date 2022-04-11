#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
using namespace std;

class Vector
{
private:
	double x = 0;
	double y = 0;
public:
	double GetX()
	{
		return x;
	}
	void SetX(double valueX)
	{
		x = valueX;
	}
	double GetY()
	{
		return y;
	}
	void SetY(double valueY)
	{
		y = valueY;
	}
	/*double GetZ()
	{
		return z;
	}
	void SetZ(double valueZ)
	{
		z = valueZ;
	}*/
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	double multiplication();
	double vector_length();
};

class Circle
{
private:
	double R=0;
public:
	double GetR()
	{
		return R;
	}
	void SetR(double valueR)
	{
		R = valueR;
	}
	double square();
	double circle_length();
};

class Complex
{
private:
	double re = 0;
	double im = 0;
public:
	double GetIM()
	{
		return im;
	}
	void SetIM(double valueIM)
	{
		im = valueIM;
	}
	double GetRE()
	{
		return re;
	}
	void SetRE(double valueRE)
	{
		re = valueRE;
	}
	Complex sum(Complex a);
	Complex difference(Complex a);
	Complex multip(Complex a);
	double division(Complex a);
};
void Print(double, double);
//void Print(double x, double y);
//double absolute(Complex a);
#endif
