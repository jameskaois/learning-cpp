#pragma once
#include "NhanVien.h"
#include "NVVanPhong.h"
#include "NVSanXuat.h"
#include "NVQuanLy.h"

class CongTy {
    private:
        int n;
        NhanVien* ds[1000];
    public:
        void Nhap();
        void Xuat();
        float TinhTongLuong();
        NhanVien* TimKiem(string ten);
};
