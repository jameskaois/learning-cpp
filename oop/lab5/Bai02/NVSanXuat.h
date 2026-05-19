#pragma once
#include "NhanVien.h"

class NVSanXuat : public NhanVien {
    private:
        int SoSanPham;
    public:
        void Nhap();
        void Xuat();
        float TinhLuong();
};
