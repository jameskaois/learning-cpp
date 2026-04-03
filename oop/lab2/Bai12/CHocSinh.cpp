#include "CHocSinh.h"
#include <iostream>
using namespace std;
void CHocSinh::Nhap() {
    cout << "Ho ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "Diem toan: "; cin >> toan;
    cout << "Diem van: "; cin >> van;
}
void CHocSinh::Xuat() {
    cout << "HS: " << hoTen << " | DTB: " << DiemTrungBinh();
}
float CHocSinh::DiemTrungBinh() { return (toan + van) / 2; }
