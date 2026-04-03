#include "CSoPhuc.h"
#include <iostream>
using namespace std;

int main() {
    CSoPhuc s1, s2;
    s1.Nhap(); s2.Nhap();
    cout << "\nTong: "; s1.Tong(s2).Xuat();
    cout << "\nHieu: "; s1.Hieu(s2).Xuat();
    cout << "\nTich: "; s1.Tich(s2).Xuat();
    cout << endl;
    return 0;
}
