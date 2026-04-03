#include <iostream>
using namespace std;

struct duongtron
{
    float x;
    float y;
    float r;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
float ChuVi(DUONGTRON);
float DienTich(DUONGTRON);

int main()
{
    DUONGTRON dt;
    Nhap(dt);
    
    float cv = ChuVi(dt);
    float dtich = DienTich(dt);
    
    cout << "Duong tron co:\n";
    Xuat(dt);
    cout << "Chu vi: " << cv << "\n";
    cout << "Dien tich: " << dtich << "\n";
    
    return 1;
}

void Nhap(DUONGTRON& dt)
{
    cout << "Nhap toa do tam x: ";
    cin >> dt.x;
    cout << "Nhap toa do tam y: ";
    cin >> dt.y;
    cout << "Nhap ban kinh r: ";
    cin >> dt.r;
}

void Xuat(DUONGTRON dt)
{
    cout << "Tam I(" << dt.x << ", " << dt.y << "), Ban kinh R = " << dt.r << "\n";
}

float ChuVi(DUONGTRON dt)
{
    return 2 * 3.14159 * dt.r;
}

float DienTich(DUONGTRON dt)
{
    return 3.14159 * dt.r * dt.r;
}