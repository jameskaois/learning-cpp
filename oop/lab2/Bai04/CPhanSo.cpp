#include "CPhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
    a = abs(a); b = abs(b);
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

CPhanSo::CPhanSo() { tuSo = 0; mauSo = 1; }
CPhanSo::CPhanSo(int tu, int mau) { tuSo = tu; mauSo = mau; if(mauSo == 0) mauSo = 1; }

void CPhanSo::Nhap() {
    cout << "Nhap tu: "; cin >> tuSo;
    do { cout << "Nhap mau (!=0): "; cin >> mauSo; } while(mauSo == 0);
}

void CPhanSo::Xuat() {
    if (mauSo == 1) cout << tuSo;
    else if (tuSo == 0) cout << 0;
    else cout << tuSo << "/" << mauSo;
}

void CPhanSo::RutGon() {
    int u = UCLN(tuSo, mauSo);
    tuSo /= u;
    mauSo /= u;
    if (mauSo < 0) { tuSo = -tuSo; mauSo = -mauSo; }
}

CPhanSo CPhanSo::Tong(CPhanSo b) {
    CPhanSo kq(tuSo * b.mauSo + b.tuSo * mauSo, mauSo * b.mauSo);
    kq.RutGon();
    return kq;
}

CPhanSo CPhanSo::Hieu(CPhanSo b) {
    CPhanSo kq(tuSo * b.mauSo - b.tuSo * mauSo, mauSo * b.mauSo);
    kq.RutGon();
    return kq;
}

CPhanSo CPhanSo::Tich(CPhanSo b) {
    CPhanSo kq(tuSo * b.tuSo, mauSo * b.mauSo);
    kq.RutGon();
    return kq;
}

CPhanSo CPhanSo::Thuong(CPhanSo b) {
    CPhanSo kq(tuSo * b.mauSo, mauSo * b.tuSo);
    kq.RutGon();
    return kq;
}
