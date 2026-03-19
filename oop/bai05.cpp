#include <iostream>
using namespace std;

struct sophuc {
    float thuc, ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);

int main() {
    SOPHUC sp1, sp2;

    cout << "Nhap so phuc thu nhat: " << endl;
    Nhap(sp1);

    cout << "Nhap so phuc thu hai: " << endl;
    Nhap(sp2);

    cout << "So phuc thu nhat: ";
    Xuat(sp1);

    cout << "So phuc thu hai: ";
    Xuat(sp2);

    cout << endl;

    SOPHUC tong = Tong(sp1, sp2);
    SOPHUC hieu = Hieu(sp1, sp2);
    SOPHUC tich = Tich(sp1, sp2);
    SOPHUC thuong = Thuong(sp1, sp2);

    cout << "Tong la: ";
    Xuat(tong);

    cout << "Hieu la: ";
    Xuat(hieu);

    cout << "Tich la: ";
    Xuat(tich);

    cout << "Thuong la: ";
    Xuat(thuong);

    return 0;
}

void Nhap(SOPHUC& sp) {
    cout << "Nhap phan thuc: ";
    cin >> sp.thuc;
    cout << "Nhap phan ao: ";
    cin >> sp.ao;
}

void Xuat(SOPHUC sp) {
    cout << sp.thuc << " + " << sp.ao << "i\n";
}

SOPHUC Tong(SOPHUC sp1, SOPHUC sp2) {
    SOPHUC temp;
    temp.thuc = sp1.thuc + sp2.thuc;
    temp.ao = sp1.ao + sp2.ao;
    return temp;
}

SOPHUC Hieu(SOPHUC sp1, SOPHUC sp2) {
    SOPHUC temp;
    temp.thuc = sp1.thuc - sp2.thuc;
    temp.ao = sp1.ao - sp2.ao;
    return temp;
}

SOPHUC Tich(SOPHUC sp1, SOPHUC sp2) {
    SOPHUC temp;
    temp.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao;
    temp.ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
    return temp;
}

SOPHUC Thuong(SOPHUC sp1, SOPHUC sp2) {
    SOPHUC temp;
    temp.thuc = (sp1.thuc * sp2.thuc + sp1.ao * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao *sp2.ao);
    temp.ao = (sp1.ao * sp2.thuc - sp1.thuc * sp2.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
    return temp;
}