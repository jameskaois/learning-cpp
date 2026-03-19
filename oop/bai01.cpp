#include <iostream>
using namespace std;

struct phanso
{
    int tuSo, mauSo;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO &);
int KiemTra(PHANSO);

int main()
{
    PHANSO ps1;

    Nhap(ps1);
    cout << KiemTra(ps1);

    return 0;
}

void Nhap(PHANSO &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tuSo;

    cout << "Nhap mau so: ";
    cin >> ps.mauSo;
}

int KiemTra(PHANSO ps)
{
    if (ps.tuSo < 0 || ps.mauSo < 0)
    {
        return -1;
    }
    else
    {
        return 1;
    }
    return 0;
}