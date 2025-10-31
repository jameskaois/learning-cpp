#include <iostream>
using namespace std;

// kiểm tra số nguyên tố
bool isPrime(int n)
{
    if (n < 2)
        return false;
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 2)
        return true;
    return false;
}

// tính tổng chữ số
int sumDigits(int n)
{
    int s = 0;
    while (n > 0)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

// kiểm tra palindrome
bool isPalindrome(int n)
{
    int temp = n;
    int soNguoc = 0;
    while (n > 0)
    {
        soNguoc = soNguoc * 10 + (n % 10);
        n /= 10;
    }
    return (soNguoc == temp);
}

int main()
{
    int M, N;
    cout << "Nhap M: ";
    cin >> M;
    cout << "Nhap N: ";
    cin >> N;

    // đảm bảo M < N
    if (M > N)
    {
        int t = M;
        M = N;
        N = t;
    }

    // a) kiểm tra M và N có phải số nguyên tố
    cout << "\n(a)\n";
    if (isPrime(M))
        cout << M << " la so nguyen to\n";
    else
        cout << M << " khong phai so nguyen to\n";

    if (isPrime(N))
        cout << N << " la so nguyen to\n";
    else
        cout << N << " khong phai so nguyen to\n";

    // b) liệt kê các số nguyên tố giữa M và N
    int L[1000], k = 0;
    cout << "\n(b) Cac so nguyen to giua M va N: ";
    for (int i = M + 1; i < N; i++)
    {
        if (isPrime(i))
        {
            L[k] = i;
            k++;
            cout << i << " ";
        }
    }
    cout << endl;

    if (k == 0)
    {
        cout << "Khong co so nguyen to nao giua M va N.\n";
        return 0;
    }

    // c) số có tổng các chữ số lớn nhất
    int maxSum = -1, soMax = 0;
    for (int i = 0; i < k; i++)
    {
        int tong = sumDigits(L[i]);
        if (tong > maxSum)
        {
            maxSum = tong;
            soMax = L[i];
        }
    }
    cout << "\n(c) So co tong chu so lon nhat: " << soMax << endl;

    // d) tìm số nguyên tố palindrome
    cout << "\n(d) Cac so nguyen to Palindrome: ";
    for (int i = 0; i < k; i++)
    {
        if (isPalindrome(L[i]))
        {
            cout << L[i] << " ";
        }
    }
    cout << endl;

    // e) cặp số lẻ chênh nhau 2
    int demCap2 = 0;
    cout << "\n(e) Cac cap so le lien ke (chenh nhau 2): ";
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (L[j] - L[i] == 2)
            {
                cout << "(" << L[i] << ", " << L[j] << ") ";
                demCap2++;
            }
        }
    }
    cout << "\nSo cap: " << demCap2 << endl;

    // f) cặp số có tổng = M + N
    int tongMN = M + N;
    cout << "\n(f) Cac cap co tong = M + N (" << tongMN << "): ";
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (L[i] + L[j] == tongMN)
            {
                cout << "(" << L[i] << ", " << L[j] << ") ";
            }
        }
    }

    cout << "\n";
    return 0;
}