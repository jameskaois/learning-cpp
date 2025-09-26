#include <iostream>
using namespace std;

int main() {
    string cars[4] = {"BMW", "Porsche", "Mercedes", "Audi"};

    for (int i = 0; i < (sizeof(cars) / sizeof(cars[0])); i++) {
        cout << i;
    }

    return 0;
}