#include "CNgay.h"
#include <iostream>
using namespace std;

int main() {
    CNgay n;
    n.Nhap();
    n.HomQua();
    cout << "Ngay hom qua: "; n.Xuat();
    cout << endl;
    return 0;
}
