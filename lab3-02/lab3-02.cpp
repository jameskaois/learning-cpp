#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int ucln = 1;
    int minVal = (a < b) ? a : b;
    for (int i = 1; i <= minVal; i++)
    {
        if (a % i == 0 && b % i == 0)
            ucln = i;
    }
    return ucln;
}

int lcm(int a, int b)
{
    int maxVal = (a > b) ? a : b;
    for (int i = maxVal;; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
}

int gcdSecond(int a, int b)
{
    int minVal = (a < b) ? a : b;
    int first = 1, second = 0;
    for (int i = 1; i <= minVal; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (i > first)
            {
                second = first;
                first = i;
            }
            else if (i > second && i != first)
                second = i;
        }
    }
    return second;
}

int main()
{
    int a, b;
    cout << "Nhap 2 so: ";
    cin >> a >> b;

    cout << "UCLN: " << gcd(a, b) << endl;
    cout << "BCNN: " << lcm(a, b) << endl;
    cout << "UCLN lon nhi: " << gcdSecond(a, b) << endl;

    return 0;
}