#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    Vector a;
    Circle b;
    Complex z;
    Complex d;
    double x, y, R;
    cout << "Введите координаты вектора x,y и радиус круга через Enter \n";
    if (!(cin >> x >> y >> R))
    {
        cout << "Error! \n";
        return 0;
    }
    a.SetX(x);
    a.SetY(y);
    a.print();
    a.multiplication();
    a.vector_length();

    b.SetR(R);
    b.circle_length();
    b.square();

    z.SetIM(-5.0);
    z.SetRE(5.0);
    d.SetIM(10.0);
    d.SetRE(1.0);

    z.sum(d);
    z.difference(d);
    z.division(d);
    z.multip(d);
    return 0;
}
