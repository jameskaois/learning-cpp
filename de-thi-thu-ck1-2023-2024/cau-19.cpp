// Câu 19: Hàm TinhTong có chức năng tính tổng của các chữ số xuất hiện trong một
// chuỗi ký tự. Hãy viết hàm TinhTong để hoàn thiện chương trình này:
// Ví dụ: Nhập: “Hello tui la sinh vien nam 1 khoa 2023 cua truong UIT”
// Xuất: 8 (1 + 2 + 0 + 2 + 3)

#include <iostream>
#include <cstring>
using namespace std;
int TinhTong(string s)
{
    int sum = 0;

    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i] - '0';
        }
    }

    return sum;
}

int main()
{
    string s;
    getline(cin, s);
    cout << TinhTong(s);

    return 0;
}