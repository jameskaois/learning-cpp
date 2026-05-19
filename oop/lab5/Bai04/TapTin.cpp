#include "TapTin.h"

void TapTin::Nhap() {
    DoiTuongLuuTru::Nhap();
    cout << "Nhap dung luong tap tin (MB): ";
    cin >> DungLuong;
}

void TapTin::Xuat() {
    DoiTuongLuuTru::Xuat();
    cout << "Dung luong: " << DungLuong << " MB" << endl;
}

float TapTin::TinhDungLuong() {
    return DungLuong;
}

int TapTin::DemTapTin() {
    return 1;
}

int TapTin::DemThuMucCon() {
    return 0;
}
