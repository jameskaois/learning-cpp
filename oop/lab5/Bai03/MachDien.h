#pragma once
#include <iostream>
#include <string>
using namespace std;

class MachDien {
    public:
        virtual void Nhap() = 0;
        virtual void Xuat() = 0;
        virtual float TinhDienTro() = 0;
};
