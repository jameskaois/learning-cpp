#include "CPhanSo.h"
#include <iostream>
using namespace std;

CPhanSo::CPhanSo() {
    tuSo = 0;
    mauSo = 1;
}

void CPhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tuSo;
    
    do {
        cout << "Nhap mau so (khac 0): ";
        cin >> mauSo;
        if (mauSo == 0) {
            cout << "Mau so phai khac 0. Vui long nhap lai!\n";
        }
    } while (mauSo == 0);
}

void CPhanSo::Xuat() {
    cout << tuSo << "/" << mauSo;
}

int CPhanSo::KiemTra() {
    if (tuSo == 0) {
        return 0; 
    }
    if ((tuSo > 0 && mauSo > 0) || (tuSo < 0 && mauSo < 0)) {
        return 1; 
    }
    return -1; 
}