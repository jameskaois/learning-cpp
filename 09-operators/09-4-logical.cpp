#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    cout << (x == 10) && (x > y);
    cout << (x == 10) || (x < y);
    cout << !((x == 10) && (x > y));

    return 0;
}