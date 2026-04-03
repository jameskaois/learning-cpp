#ifndef CTAMGIAC_H
#define CTAMGIAC_H
#include "CDiem.h"

class CTamGiac {
private:
    CDiem A, B, C;
public:
    void Nhap();
    float ChuVi();
    float DienTich();
    CDiem TrongTam();
};

#endif
