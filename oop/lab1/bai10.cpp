#include <iostream>
using namespace std;

struct phanso
{
    int tu;
    int mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void NhapMang(PHANSO[], int&);
void XuatMang(PHANSO[], int);
double GiaTri(PHANSO);
PHANSO TimMax(PHANSO[], int);
void HoanVi(PHANSO&, PHANSO&);
void SapXepTang(PHANSO[], int);
void SapXepGiam(PHANSO[], int);

int main()
{
    PHANSO a[100];
    int n;
    
    NhapMang(a, n);
    
    cout << "\nDay phan so vua nhap:\n";
    XuatMang(a, n);
    
    PHANSO max = TimMax(a, n);
    cout << "\nPhan so lon nhat la: ";
    Xuat(max);
    cout << "\n";
    
    SapXepTang(a, n);
    cout << "\nDay phan so sap xep tang dan:\n";
    XuatMang(a, n);
    
    SapXepGiam(a, n);
    cout << "\nDay phan so sap xep giam dan:\n";
    XuatMang(a, n);
    
    return 1;
}

void Nhap(PHANSO& x)
{
    cout << "Nhap tu so: ";
    cin >> x.tu;
    cout << "Nhap mau so: ";
    cin >> x.mau;
}

void Xuat(PHANSO x)
{
    cout << x.tu << "/" << x.mau;
}

void NhapMang(PHANSO a[], int& n)
{
    cout << "Nhap so luong phan so: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan so thu " << i + 1 << ":\n";
        Nhap(a[i]);
    }
}

void XuatMang(PHANSO a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
        cout << "  ";
    }
    cout << "\n";
}

double GiaTri(PHANSO x)
{
    return (double)x.tu / x.mau;
}

PHANSO TimMax(PHANSO a[], int n)
{
    PHANSO max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (GiaTri(a[i]) > GiaTri(max))
        {
            max = a[i];
        }
    }
    return max;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
    PHANSO temp = x;
    x = y;
    y = temp;
}

void SapXepTang(PHANSO a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GiaTri(a[i]) > GiaTri(a[j]))
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}

void SapXepGiam(PHANSO a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GiaTri(a[i]) < GiaTri(a[j]))
            {
                HoanVi(a[i], a[j]);
            }
        }
    }
}