#include <iostream>
#include <math.h>
using namespace std;

int TinhGiaiThua(int n) {
    int tich = 1;

    for (int i = 1; i <= n; i++) {
        tich *= i;
    }   

    return tich;
}

double TinhTong(int n, double x) {
    double tong = 0;

    for (int i = 1; i <= n; i++) {
        tong += pow(x, i) / TinhGiaiThua(i);
    }
    
    return tong;
}

int main() {
    int n; double x;

    cout << "Nhap n: ";
    cin >> n;

    cout << "Nhap x: ";
    cin >> x;

    cout << "S(n, x) = S(" << n << ", " << x << ") = " << TinhTong(n, x);

    return 0;
}