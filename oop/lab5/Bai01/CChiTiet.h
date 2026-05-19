#pragma once
#include <iostream>
#include <string>
using namespace std;

class CChiTiet {
    protected:
        string MaSo;
    public:
        virtual void Nhap() = 0;
        virtual void Xuat() = 0;
        virtual float TinhGiaTri() = 0;
        virtual int DemChiTietDon() = 0;
        virtual CChiTiet* TimKiem(string) = 0;
};