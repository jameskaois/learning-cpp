#include <iostream>
#include "CMay.h"
using namespace std;

int main() {
    CMay M;
    M.Nhap();
    M.Xuat();
    float TongGiaTri = M.TinhGiaTri();
    int SoLuongChiTietDon = M.DemChiTietDon();
    string ms;

    cout << "Tong gia tri cua may la: " << TongGiaTri << endl;
    cout << "So luong chi tiet don cua may la: " << SoLuongChiTietDon << endl;
    cout << "Nhap ma so chi tiet can tim: ";
    cin.ignore();
    getline(cin, ms);
    CChiTiet* kq = M.TimKiem(ms);
    if (kq != NULL) {
        cout << "Chi tiet can tim: " << endl;
        kq->Xuat();
    } else {
        cout << "Ko tim thay chi tiet nao." << endl;
    }

    return 0;
}