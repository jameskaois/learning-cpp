#include <iostream>
using namespace std;

struct phanso
{
    int tuSo, mauSo;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main() {
    PHANSO ps1, ps2;

    cout << "Nhap phan so thu nhat: " << endl;
    Nhap(ps1);

    cout << "Nhap phan so thu hai: " << endl;
    Nhap(ps2);

    cout << "Phan so thu nhat: ";
    Xuat(ps1);

    cout << endl << "Phan so thu hai: ";
    Xuat(ps2);

    cout << endl << endl;
    
    PHANSO tong = Tong(ps1, ps2);
    PHANSO hieu = Hieu(ps1, ps2);
    PHANSO tich = Tich(ps1, ps2);
    PHANSO thuong = Thuong(ps1, ps2);

    RutGon(tong);
    RutGon(hieu);
    RutGon(tich);
    RutGon(thuong);

    cout << "Tong: ";
    Xuat(tong);

    cout << endl << "Hieu: ";
    Xuat(hieu);

    cout << endl << "Tich: ";
    Xuat(tich);

    cout << endl << "Thuong: ";
    Xuat(thuong);

    return 0;
}

void Nhap(PHANSO &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tuSo;

    cout << "Nhap mau so: ";
    cin >> ps.mauSo;
}

void Xuat(PHANSO ps) {
    cout << ps.tuSo << "/" << ps.mauSo;
}

void RutGon(PHANSO &ps)
{
    int a = abs(ps.tuSo);
    int b = abs(ps.mauSo);
    while (a * b != 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    ps.tuSo = ps.tuSo / (a + b);
    ps.mauSo = ps.mauSo / (a + b);
}

PHANSO Tong(PHANSO ps1, PHANSO ps2) {
    PHANSO temp;
    temp.tuSo = ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2.tuSo;
    temp.mauSo = ps1.mauSo * ps2.mauSo;
    return temp;
}

PHANSO Hieu(PHANSO ps1, PHANSO ps2) {
    PHANSO temp;
    temp.tuSo = ps1.tuSo * ps2.mauSo - ps1.mauSo * ps2.tuSo;
    temp.mauSo = ps1.mauSo * ps2.mauSo;
    return temp;
}

PHANSO Tich(PHANSO ps1, PHANSO ps2) {
    PHANSO temp;
    temp.tuSo = ps1.tuSo * ps2.tuSo;
    temp.mauSo = ps1.mauSo * ps2.mauSo;
    return temp;
}

PHANSO Thuong(PHANSO ps1, PHANSO ps2) {
    PHANSO temp;
    temp.tuSo = ps1.tuSo * ps2.mauSo;
    temp.mauSo = ps1.mauSo * ps2.tuSo;
    return temp;
}