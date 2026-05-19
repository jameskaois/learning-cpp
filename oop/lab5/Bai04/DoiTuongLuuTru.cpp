#include "DoiTuongLuuTru.h"

void DoiTuongLuuTru::Nhap() {
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, Ten);
    cout << "Nhap ngay tao: ";
    getline(cin, NgayTao);
}

void DoiTuongLuuTru::Xuat() {
    cout << "Ten: " << Ten << " | Ngay tao: " << NgayTao << endl;
}

int DoiTuongLuuTru::LaThuMuc() {
    return 0;
}
