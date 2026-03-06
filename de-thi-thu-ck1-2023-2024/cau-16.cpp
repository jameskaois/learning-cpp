// Câu 16: Cho các bài toán sau:
// Bài toán 1: Nhà A cách trường 3km. Nhà B nằm trên đoạn thẳng từ nhà A đến trường và
// gần trường gấp 3 lần so với nhà A. Hỏi nhà A cách nhà B bao nhiêu km ?
// Bài toán 2: A hiện đang 9 tuổi, tuổi của B chỉ bằng 1 phần 3 lần tuổi của A, hỏi khi B
// được sinh ra thì A đang bao nhiêu tuổi ?
// Bài toán 3: Một chiếc laptop hiện đang được bán trên thị trường với giá 16 triệu. Hỏi sau
// khi áp dụng ưu đãi giảm 10% giá tại một cửa hàng thì giá của chiếc laptop kia là bao
// nhiêu ?

// a. Nêu ý tưởng giải quyết chung cho cả 3 bài toán trên.
// b. Hãy mô tả thuật toán (có thể dùng lưu đồ hoặc mã giả, ...) để giải các bài toán
// trên.
// c. Sử dụng ngôn ngữ lập trình C++ để viết chương trình tương ứng với thuật toán
// trong câu b.

// -------- GIẢI ----------
// a.
// - Số hạng thứ nhất: A
// - Số lần số hạng thứ hai kém hơn số hạng thứ nhất: B
// - Hiệu của 2 số hạng: A - A*B = D
//
// b.
// ***MÃ GIẢ***
// INPUT:
// - Số hạng thứ nhất: A
// - Số lần số hạng thứ hai kém hơn số hạng thứ nhất: B
// OUTPUT:
// - Hiệu của 2 số hạng
// B1: Nhập A,B
// B2: Tính D = A - A*B
// B3: Xuất D ra màn hình
//
// ***LƯU ĐỒ***
//           ___________
//          /           \
//         |   Bắt đầu   |      <-- Hình Elipse (Bắt đầu)
//          \___________/
//                |
//                |
//                v
//        _________________
//       /                 /
//      /   Nhập A và B   /     <-- Hình Bình Hành (Nhập)
//     /_________________/
//                |
//                |
//                v
//       __________________
//      |                  |
//      | Tính D = A - A*B |    <-- Hình Chữ Nhật (Xử lý)
//      |__________________|
//                |
//                |
//                v
//        __________                 ___________
//       /          /               /           \
//      /  Xuất D  /-------------> |  Kết thúc   |
//     /__________/                 \___________/

//    ^ Hình Bình Hành             ^ Hình Elipse
//       (Xuất)                     (Kết thúc)

#include <iostream>
using namespace std;

int main()
{
    double a;
    double b;

    cout << "Nhap số hạng thứ nhất: ";
    cin >> a;

    cout << "Nhap ty le phan nho hon so voi ban dau (dang thap phan): ";
    cin >> b;

    double d = a - a * b;
    cout << "Ket qua: " << d;

    return 0;
}