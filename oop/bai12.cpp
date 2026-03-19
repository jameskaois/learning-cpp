#include <iostream>
#include <string>
using namespace std;

struct hocsinh
{
    string hoten;
    float toan;
    float van;
    float dtb;
};
typedef struct hocsinh HOCSINH;

void Nhap(HOCSINH&);
void Xuat(HOCSINH);
void TinhDTB(HOCSINH&);
void NhapDS(HOCSINH[], int&);
void XuatDS(HOCSINH[], int);
HOCSINH TimMaxDTB(HOCSINH[], int);
HOCSINH TimMinDTB(HOCSINH[], int);

int main()
{
    HOCSINH a[100];
    int n;
    
    NhapDS(a, n);
    
    cout << "\nDanh sach hoc sinh:\n";
    XuatDS(a, n);
    
    HOCSINH max = TimMaxDTB(a, n);
    HOCSINH min = TimMinDTB(a, n);
    
    cout << "\n--- Hoc sinh co diem trung binh cao nhat ---\n";
    Xuat(max);
    
    cout << "\n--- Hoc sinh co diem trung binh thap nhat ---\n";
    Xuat(min);
    
    return 1;
}

void Nhap(HOCSINH& hs)
{
    cout << "Nhap ho ten: ";
    getline(cin >> ws, hs.hoten);
    cout << "Nhap diem Toan: ";
    cin >> hs.toan;
    cout << "Nhap diem Van: ";
    cin >> hs.van;
}

void Xuat(HOCSINH hs)
{
    cout << "Ho ten: " << hs.hoten << " | Toan: " << hs.toan << " | Van: " << hs.van << " | DTB: " << hs.dtb << "\n";
}

void TinhDTB(HOCSINH& hs)
{
    hs.dtb = (hs.toan + hs.van) / 2;
}

void NhapDS(HOCSINH a[], int& n)
{
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << ":\n";
        Nhap(a[i]);
        TinhDTB(a[i]);
    }
}

void XuatDS(HOCSINH a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
}

HOCSINH TimMaxDTB(HOCSINH a[], int n)
{
    HOCSINH max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i].dtb > max.dtb)
        {
            max = a[i];
        }
    }
    return max;
}

HOCSINH TimMinDTB(HOCSINH a[], int n)
{
    HOCSINH min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i].dtb < min.dtb)
        {
            min = a[i];
        }
    }
    return min;
}