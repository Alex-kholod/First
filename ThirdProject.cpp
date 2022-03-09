#include "Header.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    vector a;
    circle b;
    double x, y, z, R;
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
    return 0;
}
