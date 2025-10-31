#include <iostream>
#include <cmath>
using namespace std;

void kiemTraTamGiac(double a, double b, double c)
{
    // Sắp xếp để c là cạnh lớn nhất
    double x = a, y = b, z = c;
    if (x > y)
        swap(x, y);
    if (y > z)
        swap(y, z);
    if (x > y)
        swap(x, y);

    // Kiểm tra có phải tam giác không
    if (x + y <= z)
    {
        cout << "Khong phai tam giac\n";
        return;
    }

    bool deu = (x == y && y == z);
    bool can = (x == y || y == z || x == z);
    bool vuong = (fabs(x * x + y * y - z * z) < 1e-9);

    if (deu)
    {
        cout << "Tam giac deu\n";
    }
    else if (vuong && can)
    {
        cout << "Tam giac vuong can\n";
    }
    else if (vuong && !can)
    {
        cout << "Tam giac vuong thuong (vuong nua deu)\n";
    }
    else if (can)
    {
        cout << "Tam giac can\n";
    }
    else
    {
        cout << "Tam giac thuong\n";
    }
}

int main()
{
    double so1, so2, so3;

    cout << "Nhap so 1: ";
    cin >> so1;
    cout << "Nhap so 2: ";
    cin >> so2;
    cout << "Nhap so 3: ";
    cin >> so3;

    kiemTraTamGiac(so1, so2, so3);

    return 0;
}
