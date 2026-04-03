#include "CHocSinh.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n; cout << "Nhap sl hs: "; cin >> n;
    vector<CHocSinh> ds(n);
    for(int i=0; i<n; i++) ds[i].Nhap();
    
    CHocSinh maxHS = ds[0], minHS = ds[0];
    for(int i=1; i<n; i++) {
        if(ds[i].DiemTrungBinh() > maxHS.DiemTrungBinh()) maxHS = ds[i];
        if(ds[i].DiemTrungBinh() < minHS.DiemTrungBinh()) minHS = ds[i];
    }
    cout << "\nMAX: "; maxHS.Xuat();
    cout << "\nMIN: "; minHS.Xuat();
    cout << endl;
    return 0;
}
