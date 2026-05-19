#pragma once
#include <iostream>
#include <string>
using namespace std;

class DoiTuongLuuTru {
    protected:
        string Ten;
        string NgayTao;
    public:
        virtual void Nhap();
        virtual void Xuat();
        virtual float TinhDungLuong() = 0;
        virtual int DemTapTin() = 0;
        virtual int DemThuMucCon() = 0;
        virtual int LaThuMuc();
};
