#include "CPhanSo.h"
#include <iostream>
using namespace std;

int main() {
    CPhanSo ps1, ps2;
    cout << "Nhap phan so 1:\n"; ps1.Nhap();
    cout << "Nhap phan so 2:\n"; ps2.Nhap();
    
    cout << "\nPhan so lon nhat la: ";
    if (ps1.GiaTri() >= ps2.GiaTri()) ps1.Xuat();
    else ps2.Xuat();
    cout << endl;
    return 0;
}
