#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"BMW", "Porsche", "Mercedes", "Audi"};

    for (string car : cars) {
        cout << car << endl;
    }

    return 0;
}