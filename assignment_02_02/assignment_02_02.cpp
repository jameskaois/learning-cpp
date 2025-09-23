#include <iostream>
#include <bitset>
using namespace std;

int main() {
    cout << "Hello!" << endl;
    cout << "\033[31mInfoSec\033[0m" << endl;
    cout << "👥🌐🔒🔑💻" << endl;
    cout << "So thap phan: " << 2025 << endl;
    cout << "He 16 (hex): " << hex << 2025 << endl;
    cout << "He 2 (binary): " << bitset<16>(2025) << endl; 

    return 0;
}