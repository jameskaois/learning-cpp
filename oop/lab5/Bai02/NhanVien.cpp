#include "NhanVien.h"

void NhanVien::Nhap() {
    cout << "Nhap ho ten: ";
    cin.ignore();
    getline(cin, HoTen);
    cout << "Nhap ngay sinh: ";
    getline(cin, NgaySinh);
    cout << "Nhap luong co ban: ";
    cin >> LuongCoBan;
}

void NhanVien::Xuat() {
    cout << "Ho ten: " << HoTen << endl;
    cout << "Ngay sinh: " << NgaySinh << endl;
    cout << "Luong co ban: " << LuongCoBan << endl;
}

string NhanVien::GetHoTen() {
    return HoTen;
}
