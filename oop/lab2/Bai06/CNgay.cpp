#include "CNgay.h"
#include <iostream>
using namespace std;

CNgay::CNgay() { d = m = y = 1; }

void CNgay::Nhap() {
    cout << "Nhap ngay thang nam: "; cin >> d >> m >> y;
}

void CNgay::Xuat() {
    cout << d << "/" << m << "/" << y;
}

bool CNgay::LaNamNhuan() {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int CNgay::SoNgayTrongThang() {
    int ds[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (LaNamNhuan()) ds[2] = 29;
    return ds[m];
}

void CNgay::KeTiep() {
    d++;
    if (d > SoNgayTrongThang()) { d = 1; m++; }
    if (m > 12) { m = 1; y++; }
}

void CNgay::HomQua() {
    d--;
    if (d == 0) {
        m--;
        if (m == 0) { m = 12; y--; }
        d = SoNgayTrongThang();
    }
}
