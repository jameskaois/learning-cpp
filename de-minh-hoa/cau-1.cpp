#include <iostream>
using namespace std;

int main() {
    int n;
    int finalResult = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int result = 0;

        cout << endl << "result = ";

        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                result += 1;
                cout << "1 ";
            } else {
                result *= j;
                cout << "* " << j << " ";
            }
        }

        if (result != 1) {
            cout << "= " << result << endl;
        } else {
            cout << endl;
        }

        cout << "finalResult = " << finalResult << " + " << result << " = " << finalResult + result << endl << endl;
        finalResult += result;
    }

    cout << "\033[31m" << "finalResult = " << finalResult << "\033[0m";

    return 0;
}