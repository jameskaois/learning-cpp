#include <iostream>
#include <vector>
using namespace std;

double Timx(vector<double> values) {
    double max = 0;

    for (double value : values) {
        double newValue = value;

        if (newValue < 0) {
            newValue *= -1;
        }

        if (newValue > max) {
            max = newValue;
        }
    }

    return max;
}

int main() {
    vector<double> myValues;

    myValues.push_back(12.1);
    myValues.push_back(12.2);
    myValues.push_back(-24.2);
    myValues.push_back(-21.2);

    cout << Timx(myValues);

    return 0;
}