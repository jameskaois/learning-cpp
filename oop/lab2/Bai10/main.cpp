#include "CPhanSo.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cout << "Nhap n: "; cin >> n;
    vector<CPhanSo> ds(n);
    for(int i=0; i<n; i++) { cout << "PS " << i+1 << ": "; ds[i].Nhap(); }
    
    CPhanSo maxPS = ds[0];
    for(auto p : ds) if(p.GiaTri() > maxPS.GiaTri()) maxPS = p;
    cout << "\nMAX: "; maxPS.Xuat();

    sort(ds.begin(), ds.end(), [](const CPhanSo& a, const CPhanSo& b) {
        return a.GiaTri() < b.GiaTri();
    });
    
    cout << "\nTang dan: ";
    for(auto p : ds) { p.Xuat(); cout << " "; }
    cout << endl;
    return 0;
}
