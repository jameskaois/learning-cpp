#pragma once
#include "NhanVien.h"

class NVVanPhong : public NhanVien {
    private:
        int SoNgayLamViec;
        float TroCap;
    public:
        void Nhap();
        void Xuat();
        float TinhLuong();
};
