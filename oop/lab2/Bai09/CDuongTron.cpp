#include "CDuongTron.h"
#include <iostream>
#define PI 3.14159
using namespace std;

void CDuongTron::Nhap() {
    cout << "Nhap tam (x,y): "; tam.Nhap();
    cout << "Nhap ban kinh: "; cin >> r;
}
float CDuongTron::ChuVi() { return 2 * PI * r; }
float CDuongTron::DienTich() { return PI * r * r; }
