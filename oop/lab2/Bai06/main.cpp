#include "CNgay.h"
#include <iostream>
using namespace std;

int main() {
    CNgay n;
    n.Nhap();
    n.KeTiep();
    cout << "Ngay ke tiep: "; n.Xuat();
    cout << endl;
    return 0;
}
