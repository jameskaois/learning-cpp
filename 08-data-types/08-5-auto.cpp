#include <iostream>
using namespace std;

int main() {
    auto x = 5; // x is now an int
    x = 10;     // OK - still an int
    x = 9.99;   // Error - can't assign a double to an int

    return 0;
}