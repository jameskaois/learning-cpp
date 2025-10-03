#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n;

    cout << "Nhap m: ";
    cin >> m;

    cout << "Nhap n: ";
    cin >> n;

    vector<int> nums;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && m % i != 0) {
            nums.push_back(i);
        }
    }

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}