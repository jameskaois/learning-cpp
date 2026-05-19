#include "ThuMuc.h"
#include "TapTin.h"

void ThuMuc::Nhap() {
    DoiTuongLuuTru::Nhap();
    cout << "So luong doi tuong con trong thu muc '" << Ten << "': ";
    cin >> n;
    
    int loai;
    for (int i = 0; i < n; i++) {
        cout << "Nhap doi tuong con thu " << i + 1 << " (1. Tap tin, 2. Thu muc con): ";
        cin >> loai;
        if (loai == 1) {
            ds[i] = new TapTin;
        } else {
            ds[i] = new ThuMuc;
        }
        ds[i]->Nhap();
    }
}

void ThuMuc::Xuat() {
    DoiTuongLuuTru::Xuat();
    cout << "--- Cac thanh phan trong thu muc '" << Ten << "': ---" << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
    }
    cout << "--------------------------------------" << endl;
}

float ThuMuc::TinhDungLuong() {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i]->TinhDungLuong();
    }
    return tong;
}

int ThuMuc::DemTapTin() {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        dem += ds[i]->DemTapTin();
    }
    return dem;
}

int ThuMuc::DemThuMucCon() {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (ds[i]->LaThuMuc() == 1) {
            dem += 1;
        }
        dem += ds[i]->DemThuMucCon();
    }
    return dem;
}

int ThuMuc::LaThuMuc() {
    return 1;
}
