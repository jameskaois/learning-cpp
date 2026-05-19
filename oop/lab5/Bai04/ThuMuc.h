#pragma once
#include "DoiTuongLuuTru.h"

class ThuMuc : public DoiTuongLuuTru {
    private:
        int n;
        DoiTuongLuuTru* ds[100];
    public:
        void Nhap();
        void Xuat();
        float TinhDungLuong();
        int DemTapTin();
        int DemThuMucCon();
        int LaThuMuc();
};
