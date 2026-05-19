#pragma once
#include "NhanVien.h"

class NVQuanLy : public NhanVien {
    private:
        float HeSoChucVu;
        float Thuong;
    public:
        void Nhap();
        void Xuat();
        float TinhLuong();
};
