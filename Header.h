#ifndef GENERAL_H
#define GENERAL_H

#include <iostream>
using namespace std;

class vector
{
private:
	double x = 0;
	double y = 0;
	double z = 0;
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
	double GetZ()
	{
		return z;
	}
	void SetZ(double valueZ)
	{
		z = valueZ;
	}
	void print()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	void multiplication();
	void vector_length();
};

class circle
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
	void square();
	void circle_length();
};

#endif
