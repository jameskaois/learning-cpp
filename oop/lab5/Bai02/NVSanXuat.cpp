#include "NVSanXuat.h"

void NVSanXuat::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
}

void NVSanXuat::Xuat() {
    NhanVien::Xuat();
    cout << "So san pham: " << SoSanPham << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

float NVSanXuat::TinhLuong() {
    return LuongCoBan + SoSanPham * 2000;
}
