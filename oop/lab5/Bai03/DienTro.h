#pragma once
#include "MachDien.h"

class DienTro : public MachDien {
    private:
        string MaSo;
        float DoDoDienTro;
    public:
        void Nhap();
        void Xuat();
        float TinhDienTro();
};
