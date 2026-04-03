#include "CPhanSo.h"
#include <iostream>
using namespace std;

int main() {
    CPhanSo ps1, ps2;
    cout << "PS1:\n"; ps1.Nhap();
    cout << "PS2:\n"; ps2.Nhap();
    
    cout << "\nTong: "; ps1.Tong(ps2).Xuat();
    cout << "\nHieu: "; ps1.Hieu(ps2).Xuat();
    cout << "\nTich: "; ps1.Tich(ps2).Xuat();
    cout << "\nThuong: "; ps1.Thuong(ps2).Xuat();
    cout << endl;
    return 0;
}
