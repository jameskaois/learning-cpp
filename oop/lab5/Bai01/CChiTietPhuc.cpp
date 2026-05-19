#include "CChiTietPhuc.h"
#include "CChiTietDon.h"

void CChiTietPhuc::Nhap() {
    cout << "Nhap ma so: ";
    cin.ignore();
    getline(cin, MaSo);

    cout << "So luong chi tiet con cua chi tiet phuc: ";
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

void CChiTietPhuc::Xuat() {
    cout << "Ma so: " << MaSo << endl;
    cout << "Danh sach cac chi tiet con cua chi tiet phuc: " << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
    }
}

float CChiTietPhuc::TinhGiaTri() {
    float TongGiaTri = 0;

    for (int i = 0; i < n; i++) {
        TongGiaTri += ds[i]->TinhGiaTri();
    }

    return TongGiaTri;
}

int CChiTietPhuc::DemChiTietDon() {
    int Dem = 0;

    for (int i = 0; i < n; i++) {
        Dem += ds[i]->DemChiTietDon();
    }

    return Dem;
}

CChiTiet* CChiTietPhuc::TimKiem(string ms) {
    if (MaSo.compare(ms) == 0) {
        return this;
    } else {
        for (int i = 0; i < n; i++) {
            CChiTiet* kq = ds[i]->TimKiem(ms);
            if (kq != NULL) {
                return kq;
            }
        }
    }

    return NULL;
}