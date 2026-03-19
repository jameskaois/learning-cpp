#include <iostream>
using namespace std;

struct phanso
{
    int tuSo, mauSo;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
void Xuat(PHANSO);
int KiemTra(PHANSO, PHANSO);

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
    if (KiemTra(ps1, ps2) == 1) {
        cout << "Phan so thu nhat lon hon phan so thu hai.";
    } else if (KiemTra(ps1, ps2) == -1)  {
        cout << "Phan so thu hai lon hon phan so thu nhat.";
    } else {
        cout << "2 phan so bang nhau.";
    }

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

int KiemTra(PHANSO ps1, PHANSO ps2)
{
    double kq1 = (double)ps1.tuSo / ps1.mauSo;
    double kq2 = (double)ps2.tuSo / ps2.mauSo;

    if (kq1 > kq2) return 1;
    if (kq1 < kq2) return -1;
    return 0; 
}