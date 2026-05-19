#include "CMay.h"
#include "CChiTietPhuc.h"
#include "CChiTietDon.h"

void CMay::Nhap() {
    cout << "So luong chi tiet con cua may: ";
    cin >> n;

    int loai;
    for (int i = 0; i < n; i++) {
        cout << "Nhap chi tiet con thu " << i + 1 << ": " << endl;
        cout << "Nhap loai chi tiet (0. chi tiet don, 1. chi tiet phuc): ";
        cin >> loai;
        if (loai == 0) {
            ds[i] = new CChiTietDon;
        } else {
            ds[i] = new CChiTietPhuc;
        }
        ds[i]->Nhap();
    }
}

void CMay::Xuat() {
    cout << "Danh sach cac chi tiet con cua may: " << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
    }
}

float CMay::TinhGiaTri() {
    float TongGiaTri = 0;

    for (int i = 0; i < n; i++) {
        TongGiaTri += ds[i]->TinhGiaTri();
    }

    return TongGiaTri;
}

int CMay::DemChiTietDon() {
    int Dem = 0;

    for (int i = 0; i < n; i++) {
        Dem += ds[i]->DemChiTietDon();
    }

    return Dem;
}

CChiTiet* CMay::TimKiem(string ms) {
    for (int i = 0; i < n; i++) {
        CChiTiet* kq = ds[i]->TimKiem(ms);
        if (kq != NULL) {
            return kq;
        }
    }
    return NULL;
}