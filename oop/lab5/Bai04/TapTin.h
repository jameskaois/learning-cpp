#pragma once
#include "DoiTuongLuuTru.h"

class TapTin : public DoiTuongLuuTru {
    private:
        float DungLuong;
    public:
        void Nhap();
        void Xuat();
        float TinhDungLuong();
        int DemTapTin();
        int DemThuMucCon();
};
