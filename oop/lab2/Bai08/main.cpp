#include "CTamGiac.h"
#include "CDiem.h"
#include <iostream>
using namespace std;

int main() {
    CTamGiac tg;
    tg.Nhap();
    cout << "\nChu vi: " << tg.ChuVi();
    cout << "\nDien tich: " << tg.DienTich();
    cout << "\nTrong tam: "; tg.TrongTam().Xuat();
    cout << endl;
    return 0;
}
