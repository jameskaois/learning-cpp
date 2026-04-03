#include <iostream>
#include "CPhanSo.h"
using namespace std;

int main() {
    CPhanSo ps;
    
    cout << "--- NHAP PHAN SO ---\n";
    ps.Nhap();
    
    cout << "\nPhan so vua nhap la: ";
    ps.Xuat();
    cout << "\n";
    
    int ketQua = ps.KiemTra();
    
    if (ketQua == 0) {
        cout << "=> Day la phan so bang khong.\n";
    } else if (ketQua == 1) {
        cout << "=> Day la phan so duong.\n";
    } else {
        cout << "=> Day la phan so am.\n";
    }
    
    return 0;
}