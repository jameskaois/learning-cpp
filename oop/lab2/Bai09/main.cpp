#include "CDuongTron.h"
#include <iostream>
using namespace std;
int main() {
    CDuongTron dt; dt.Nhap();
    cout << "Chu vi: " << dt.ChuVi() << "\nDien tich: " << dt.DienTich() << endl;
    return 0;
}
