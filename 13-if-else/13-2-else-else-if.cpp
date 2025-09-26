#include <iostream>
using namespace std;

int main() {
    int x;
    int y;

    int time = 18;
    string greeting = time > 12 ? "Good afterrnoon" : "Good morning";

    cout << "Enter 'x' value: ";
    cin >> x;

    cout << "Enter 'y' value: ";
    cin >> y;

    if (x > y) {
        cout << "x is greater than y";
    } else if (x < y) {
        cout << "y is greater than x";
    } else {
        cout << "x equal y";
    }

    return 0;
}