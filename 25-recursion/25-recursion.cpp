#include <iostream>
using namespace std;

int sumCountdown(int endNum) {
    if (endNum == 0) {
        return 0;
    } else {
        return endNum + sumCountdown(endNum - 1);
    }
}

int main() {

    cout << sumCountdown(10) << endl;
    cout << 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0;

    return 0;
}