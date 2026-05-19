#include "CongTy.h"

void CongTy::Nhap() {
    cout << "So luong nhan vien cua cong ty: ";
    cin >> n;

    int loai;
    for (int i = 0; i < n; i++) {
        cout << "Nhap nhan vien thu " << i + 1 << ":" << endl;
        cout << "Loai nhan vien (1. Van phong, 2. San xuat, 3. Quan ly): ";
        cin >> loai;
        if (loai == 1) {
            ds[i] = new NVVanPhong;
        } else if (loai == 2) {
            ds[i] = new NVSanXuat;
        } else {
            ds[i] = new NVQuanLy;
        }
        ds[i]->Nhap();
    }
}

void CongTy::Xuat() {
    cout << "--- DANH SACH NHAN VIEN ---" << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
        cout << "---------------------------" << endl;
    }
}

float CongTy::TinhTongLuong() {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += ds[i]->TinhLuong();
    }
    return tong;
}

NhanVien* CongTy::TimKiem(string ten) {
    for (int i = 0; i < n; i++) {
        if (ds[i]->GetHoTen() == ten) {
            return ds[i];
        }
    }
    return NULL;
}
