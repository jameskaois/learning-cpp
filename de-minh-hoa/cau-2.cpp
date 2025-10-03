#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap n: ";
    cin >> n;

    if (n < 0) {
        cout << "n nho hon 0. THOAT!" << endl;
        return 0;
    }


    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count > 2) {
        cout << "n ko phai so nguyen to";
    } else {
        cout << "n la so nguyen to";
    }

    return 0;
}