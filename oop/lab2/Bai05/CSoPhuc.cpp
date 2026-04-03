#include "CSoPhuc.h"
#include <iostream>
using namespace std;

CSoPhuc::CSoPhuc() { thuc = ao = 0; }
CSoPhuc::CSoPhuc(float t, float a) : thuc(t), ao(a) {}

void CSoPhuc::Nhap() {
    cout << "Nhap thuc: "; cin >> thuc;
    cout << "Nhap ao: "; cin >> ao;
}

void CSoPhuc::Xuat() {
    cout << thuc << (ao >= 0 ? " + " : " - ") << (ao >= 0 ? ao : -ao) << "i";
}

CSoPhuc CSoPhuc::Tong(CSoPhuc b) { return CSoPhuc(thuc + b.thuc, ao + b.ao); }
CSoPhuc CSoPhuc::Hieu(CSoPhuc b) { return CSoPhuc(thuc - b.thuc, ao - b.ao); }
CSoPhuc CSoPhuc::Tich(CSoPhuc b) {
    return CSoPhuc(thuc * b.thuc - ao * b.ao, thuc * b.ao + ao * b.thuc);
}
