#include "CDiemKhongGian.h"
#include <iostream>
#include <cmath>
using namespace std;

CDiemKhongGian::CDiemKhongGian() {
    x = 0;
    y = 0;
    z = 0;
}

void CDiemKhongGian::Nhap() {
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap y: ";
    cin >> y;
    cout << "Nhap z: ";
    cin >> z;
}

void CDiemKhongGian::Xuat() {
    cout << "(" << x << ", " << y << ", " << z << ")";
}

float CDiemKhongGian::TinhKhoangCach(CDiemKhongGian d2) {
    return sqrt(pow(d2.x - x, 2) + pow(d2.y - y, 2) + pow(d2.z - z, 2));
}