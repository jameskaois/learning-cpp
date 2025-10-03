#include <iostream>
using namespace std;

void someFunc(string param = "Hello world") {
    cout << param << endl;
}

int sum(int a, int b) {
    return a + b;
}

int main() {

    someFunc("Hello");
    someFunc();

    cout << sum(1, 2) << endl;

    return 0;
}