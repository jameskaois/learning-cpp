#include "CTamGiac.h"
#include <iostream>
#include <cmath>
using namespace std;

void CTamGiac::Nhap() {
    cout << "Nhap A(x,y): "; A.Nhap();
    cout << "Nhap B(x,y): "; B.Nhap();
    cout << "Nhap C(x,y): "; C.Nhap();
}

float CTamGiac::ChuVi() {
    return A.KhoangCach(B) + B.KhoangCach(C) + C.KhoangCach(A);
}

float CTamGiac::DienTich() {
    float a = B.KhoangCach(C);
    float b = A.KhoangCach(C);
    float c = A.KhoangCach(B);
    float p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

CDiem CTamGiac::TrongTam() {
    return CDiem((A.GetX()+B.GetX()+C.GetX())/3, (A.GetY()+B.GetY()+C.GetY())/3);
}
