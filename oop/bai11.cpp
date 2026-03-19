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

int main()
{
    HOCSINH hs;
    Nhap(hs);
    TinhDTB(hs);
    
    cout << "\nThong tin hoc sinh:\n";
    Xuat(hs);
    
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
    cout << "Ho ten: " << hs.hoten << "\n";
    cout << "Diem Toan: " << hs.toan << "\n";
    cout << "Diem Van: " << hs.van << "\n";
    cout << "Diem trung binh: " << hs.dtb << "\n";
}

void TinhDTB(HOCSINH& hs)
{
    hs.dtb = (hs.toan + hs.van) / 2;
}