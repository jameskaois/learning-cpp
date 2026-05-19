#include <iostream>
#include "CongTy.h"
using namespace std;

int main() {
    CongTy cty;
    cty.Nhap();
    cty.Xuat();

    cout << "Tong luong cong ty phai tra la: " << cty.TinhTongLuong() << endl;

    string ten;
    cout << "Nhap ten nhan vien can tim: ";
    cin.ignore();
    getline(cin, ten);
    
    NhanVien* kq = cty.TimKiem(ten);
    if (kq != NULL) {
        cout << "Thong tin nhan vien tim thay:" << endl;
        kq->Xuat();
    } else {
        cout << "Khong tim thay nhan vien nao." << endl;
    }

    return 0;
}
