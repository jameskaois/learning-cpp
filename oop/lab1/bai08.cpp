#include <iostream>
#include <cmath>
using namespace std;

struct diem
{
    float x;
    float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);
float ChuVi(DIEM, DIEM, DIEM);
float DienTich(DIEM, DIEM, DIEM);
DIEM TrongTam(DIEM, DIEM, DIEM);

int main()
{
    DIEM a, b, c;
    cout << "Nhap toa do dinh A:\n";
    Nhap(a);
    cout << "Nhap toa do dinh B:\n";
    Nhap(b);
    cout << "Nhap toa do dinh C:\n";
    Nhap(c);
    
    float cv = ChuVi(a, b, c);
    float dt = DienTich(a, b, c);
    DIEM g = TrongTam(a, b, c);
    
    cout << "Chu vi: " << cv << "\n";
    cout << "Dien tich: " << dt << "\n";
    cout << "Toa do trong tam: ";
    Xuat(g);
    
    return 1;
}

void Nhap(DIEM& d)
{
    cout << "Nhap x: ";
    cin >> d.x;
    cout << "Nhap y: ";
    cin >> d.y;
}

void Xuat(DIEM d)
{
    cout << "(" << d.x << ", " << d.y << ")\n";
}

float KhoangCach(DIEM d1, DIEM d2)
{
    return sqrt(pow(d2.x - d1.x, 2) + pow(d2.y - d1.y, 2));
}

float ChuVi(DIEM a, DIEM b, DIEM c)
{
    float ab = KhoangCach(a, b);
    float bc = KhoangCach(b, c);
    float ca = KhoangCach(c, a);
    return ab + bc + ca;
}

float DienTich(DIEM a, DIEM b, DIEM c)
{
    float ab = KhoangCach(a, b);
    float bc = KhoangCach(b, c);
    float ca = KhoangCach(c, a);
    float p = (ab + bc + ca) / 2;
    return sqrt(p * (p - ab) * (p - bc) * (p - ca));
}

DIEM TrongTam(DIEM a, DIEM b, DIEM c)
{
    DIEM g;
    g.x = (a.x + b.x + c.x) / 3;
    g.y = (a.y + b.y + c.y) / 3;
    return g;
}