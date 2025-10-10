#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double x, tong, tich;
    int soSoDuong = 0, soSoAm = 0;

    while(true) {
        cout << "Nhap x ('0' de thoat): ";
        cin >> x;

        if (x == 0) {
            cout << "Thoat" << endl << endl;
            break;
        }

        if (x > 0) {
            tong += x;
            soSoDuong += 1;
        } else {
            tich *= x;
            soSoAm += 1;
        }
    }

    cout << "Trung binh cong cac so duong: " << tong / soSoDuong << endl;
    cout << "Trung binh nhan cac so am: " << pow(tich, 1 / soSoAm) << endl;


    return 0;
}