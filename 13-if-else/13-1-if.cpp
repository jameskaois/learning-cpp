#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    cout << "Enter 'x' value: ";
    cin >> x;

    cout << "Enter 'y' value: ";
    cin >> y;

    if (x > y) {
        cout << "x is greater than y";
    }

    if (x < y) {
        cout << "y is greater than x";
    }

    if (x == y) {
        cout << "x equal y";
    }

    return 0;
}