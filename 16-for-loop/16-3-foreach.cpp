#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    string hello = "Hello";
    for (char c : hello) {
        cout << c;
    }

    return 0;
}