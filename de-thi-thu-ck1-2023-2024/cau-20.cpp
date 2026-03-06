// Câu 20: Bạn A tìm thấy thông tin rằng một tờ giấy A4 không thể gấp đôi được quá 7 lần,
// nên bạn A quyết định làm thử. Nhưng sau khi thực hiện gấp đôi tờ giấy A4 đến lần thứ
// 6, A không thể gấp đôi tiếp được nữa dù đã cố gắng hết sức. Thấy vậy, A quyết định từ
// bỏ thử thách. Nhưng A nhận ra, mỗi lần gấp đôi tờ giấy thì thấy diện tích của nó bị giảm
// đi một nữa, nên A quyết định tính thử xem, tổng diện tích của tờ giấy qua mỗi lần gấp
// (kể cả diện tích ban đầu của tờ giấy trước khi gấp) là bao nhiêu sau khi đã gấp được n
// lần và khi đó, diện tích của tờ giấy là m cm vuông.
// Ví dụ một tờ giấy sau khi đã gấp đôi 5 lần thì được 1 mảnh giấy có diện tích 2 cm
// vuông, diện tích của tờ giấy trước đó sẽ lần lượt là 64, 32, 16, 8, 4 cm vuông. Khi đó,
// tổng cần tính là 2 + 4 + 8 + 16 + 32 + 64 = 126.
// Hãy viết chương trình có sử dụng hàm đệ quy để giúp A tính tổng đó với n, m bất kỳ.

#include <iostream>
using namespace std;

double TongDienTich(int n, double m, double sumArg)
{
    if (n == 0)
    {
        return sumArg + m;
    }
    else
    {
        return TongDienTich(n - 1, m * 2, sumArg + m);
    }
}

// (5, 2, 0)
// (4, 4, 2)
// (3, 8, 6)
// (2, 16, 2+4+8)
// (1, 32, 2+4+8+16)
// (0, 64, 2+4+8+16+64)

int main()
{
    int n;
    double m;

    cout << "Nhap so lan da gap: ";
    cin >> n;

    cout << "Nhap dien tich cua to giay hien tai: ";
    cin >> m;

    cout << "Tong dien tich cua to giay: " << TongDienTich(n, m, 0) << endl;

    cout << 'a' << "" << 'b';

    return 0;
}