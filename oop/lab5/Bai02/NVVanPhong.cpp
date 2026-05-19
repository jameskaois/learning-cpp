#include "NVVanPhong.h"

void NVVanPhong::Nhap() {
    NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;
    cout << "Nhap tro cap: ";
    cin >> TroCap;
}

void NVVanPhong::Xuat() {
    NhanVien::Xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
    cout << "Tro cap: " << TroCap << endl;
    cout << "Luong: " << TinhLuong() << endl;
}

float NVVanPhong::TinhLuong() {
    return LuongCoBan + SoNgayLamViec * 100000 + TroCap;
}
