#include <iostream>
using namespace std;

struct ngay
{
    int ng;
    int th;
    int nam;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int KiemTraNamNhuan(int);
int SoNgayTrongThang(int, int);
NGAY NgayKeTiep(NGAY);

int main()
{
    NGAY x;
    Nhap(x);
    NGAY ketiep = NgayKeTiep(x);
    cout << "Ngay vua nhap: ";
    Xuat(x);
    cout << "Ngay ke tiep: ";
    Xuat(ketiep);
    return 1;
}

void Nhap(NGAY& x)
{
    cout << "Nhap ngay: ";
    cin >> x.ng;
    cout << "Nhap thang: ";
    cin >> x.th;
    cout << "Nhap nam: ";
    cin >> x.nam;
}

void Xuat(NGAY x)
{
    cout << x.ng << "/" << x.th << "/" << x.nam << "\n";
}

int KiemTraNamNhuan(int nam)
{
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int SoNgayTrongThang(int th, int nam)
{
    if (th == 4 || th == 6 || th == 9 || th == 11)
    {
        return 30;
    }
    else if (th == 2)
    {
        if (KiemTraNamNhuan(nam) == 1)
        {
            return 29;
        }
        return 28;
    }
    return 31;
}

NGAY NgayKeTiep(NGAY x)
{
    NGAY temp;
    temp.ng = x.ng + 1;
    temp.th = x.th;
    temp.nam = x.nam;
    
    if (temp.ng > SoNgayTrongThang(x.th, x.nam))
    {
        temp.ng = 1;
        temp.th++;
        if (temp.th > 12)
        {
            temp.th = 1;
            temp.nam++;
        }
    }
    return temp;
}