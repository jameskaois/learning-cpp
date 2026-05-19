#pragma once
#include "MachDien.h"

class MachNoiTiep : public MachDien {
    private:
        int n;
        MachDien* ds[100];
    public:
        void Nhap();
        void Xuat();
        float TinhDienTro();
};
