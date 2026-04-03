#include <iostream>
#include <cmath>
using namespace std;

struct diem
{
    int x, y;
};
typedef struct diem DIEM;

void Nhap(DIEM &);
void Xuat(DIEM);
double TinhKhoangCach(DIEM, DIEM);

int main()
{
    DIEM p1, p2;

    cout << "Nhap thong tin diem thu nhat: " << endl;
    Nhap(p1);

    cout << "Nhap thong tin diem thu hai: " << endl;
    Nhap(p2);

    cout << "\n\n";

    cout << "Thong tin diem thu nhat: ";
    Xuat(p1);

    cout << endl;

    cout << "Thong tin diem thu hai: ";
    Xuat(p2);

    cout << "\nKhoang cach giua 2 diem: " << TinhKhoangCach(p1, p2);

    return 0;
}

void Nhap(DIEM &p)
{
    cout << "Nhap toa do x: ";
    cin >> p.x;

    cout << "Nhap toa do y: ";
    cin >> p.y;
}

void Xuat(DIEM p)
{
    cout << "(" << p.x << "," << p.y << ")";
}

double TinhKhoangCach(DIEM p1, DIEM p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}