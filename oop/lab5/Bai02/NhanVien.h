#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien {
    protected:
        string HoTen;
        string NgaySinh;
        float LuongCoBan;
    public:
        virtual void Nhap();
        virtual void Xuat();
        virtual float TinhLuong() = 0;
        string GetHoTen();
};
