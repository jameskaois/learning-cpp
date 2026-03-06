// Câu 17: Cho chương trình chưa hoàn thiện sau:
// #include <iostream>
// #include <cmath>
// using namespace std;
//
// void NhapMang(int a[], int &n) {
//      cout << "Nhap so nguyen n = ";
//      cin >> n;
//      for (int i = 0; i < n; i++) {
//          cout << "Nhap a[" << i << "]= ";
//          cin >> a[i];
//      }
// }
// a. Viết hàm đếm số lượng số chính phương trong mảng.
// b. Tính tổng các căn bậc 2 của các số chính phương đó.
// c. Hãy hoàn thiện hàm main bằng cách viết các dòng lệnh để gọi các hàm trong
// câu a và câu b trên.

#include <iostream>
#include <cmath>
using namespace std;

// ko thay doi yeu cau de bai
void NhapMang(int a[], int &n)
{
    cout << "Nhap so nguyen n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]= ";
        cin >> a[i];
    }
}

bool LaSoChinhPhuong(int x)
{
    if (x < 0)
        return false;
    int canBacHai = sqrt(x); // Ep ve so nguyen VD: 2.27 -> 2

    return (canBacHai * canBacHai) == x;
}

int DemSoChinhPhuong(int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (LaSoChinhPhuong(a[i]))
        {
            count += 1;
        }
    }

    return count;
}

int TongCanBacHaiSoChinhPhuongTrongMang(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        if (LaSoChinhPhuong(a[i]))
        {
            sum += sqrt(a[i]);
        }
    }

    return sum;
}

int main()
{
    int a[100];
    int n;

    NhapMang(a, n);

    cout << "So luong so chinh phuong: " << DemSoChinhPhuong(a, n) << "\n";
    cout << "Tong can bac hai cac so chinh phuong trong mang: " << TongCanBacHaiSoChinhPhuongTrongMang(a, n) << "\n";

    return 0;
}