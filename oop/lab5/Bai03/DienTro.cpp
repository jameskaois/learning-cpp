#include "DienTro.h"

void DienTro::Nhap() {
    cout << "Nhap ma so dien tro: ";
    cin.ignore();
    getline(cin, MaSo);
    cout << "Nhap do do dien tro: ";
    cin >> DoDoDienTro;
}

void DienTro::Xuat() {
    cout << "Dien tro [Ma so: " << MaSo << ", R: " << DoDoDienTro << "]" << endl;
}

float DienTro::TinhDienTro() {
    return DoDoDienTro;
}
