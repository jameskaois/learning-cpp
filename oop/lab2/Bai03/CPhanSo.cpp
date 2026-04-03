#include "CPhanSo.h"
#include <iostream>
using namespace std;

CPhanSo::CPhanSo() {
    tuSo = 0;
    mauSo = 1;
}

void CPhanSo::Nhap() {
    cout << "Nhap tu so: "; cin >> tuSo;
    do {
        cout << "Nhap mau so (khac 0): "; cin >> mauSo;
        if (mauSo == 0) cout << "Mau so khac 0! ";
    } while (mauSo == 0);
}

void CPhanSo::Xuat() {
    cout << tuSo << "/" << mauSo;
}

float CPhanSo::GiaTri() const {
    return (float)tuSo / mauSo;
}
