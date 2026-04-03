#include <iostream>
#include "CDiemKhongGian.h"
using namespace std;

int main() {
    CDiemKhongGian a, b;
    
    cout << "Nhap toa do diem A:\n";
    a.Nhap();
    
    cout << "Nhap toa do diem B:\n";
    b.Nhap();
    
    cout << "\nDiem A: ";
    a.Xuat();
    cout << "\nDiem B: ";
    b.Xuat();
    
    float khoangCach = a.TinhKhoangCach(b);
    cout << "\nKhoang cach giua hai diem la: " << khoangCach << "\n";
    
    return 0;
}