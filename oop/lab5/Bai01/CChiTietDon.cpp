#include "CChiTietDon.h"

void CChiTietDon::Nhap() {
    cout << "Nhap ma so: ";
    cin.ignore();
    getline(cin, MaSo);

    cout << "Nhap gia tien: ";
    cin >> GiaTien;
}

void CChiTietDon::Xuat() {
    cout << "Ma so: " << MaSo << endl;
    cout << "Gia tien: " << GiaTien << endl;
}

float CChiTietDon::TinhGiaTri() {
    return GiaTien;
}

int CChiTietDon::DemChiTietDon() {
    return 1;
}

CChiTiet* CChiTietDon::TimKiem(string ms) {
    if (MaSo.compare(ms) == 0) {
        return this;
    } else {
        return NULL;
    }
}