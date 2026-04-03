#include "CPhanSo.h"
#include <iostream>
using namespace std;
CPhanSo::CPhanSo() { tu = 0; mau = 1; }
void CPhanSo::Nhap() { cin >> tu >> mau; if(mau==0) mau=1; }
void CPhanSo::Xuat() { cout << tu << "/" << mau; }
float CPhanSo::GiaTri() const { return (float)tu/mau; }
