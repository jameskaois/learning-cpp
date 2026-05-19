#include "NVQuanLy.h"

void NVQuanLy::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap he so chuc vu: ";
    cin >> HeSoChucVu;
    cout << "Nhap thuong: ";
    cin >> Thuong;
}

void NVQuanLy::Xuat() {
    NhanVien::Xuat();
    cout << "He so chuc vu: " << HeSoChucVu << endl;
    cout << "Thuong: " << Thuong << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

float NVQuanLy::TinhLuong() {
    return LuongCoBan * HeSoChucVu + Thuong;
}
