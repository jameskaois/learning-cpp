#pragma once
#include "CChiTiet.h"

class CChiTietPhuc : public CChiTiet {
    private:
        int n;
        CChiTiet* ds[1000];
    public:
        void Nhap();
        void Xuat();
        float TinhGiaTri();
        int DemChiTietDon();
        CChiTiet* TimKiem(string);
};