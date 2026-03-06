// Câu 18:
// a. Hãy định nghĩa kiểu dữ liệu Vector để biểu diễn tọa độ của một vector trong
// hệ tọa độ Oxy.
// b. Viết hàm Length để tính độ dài của vector đó.
// c. Viết hàm KiemTraVuongGoc để kiểm tra xem 2 vector có vuông góc với nhau
// hay không.

#include <iostream>
#include <cmath>

// a.
struct Vector
{
    double x, y;
};

// b.
double Length(Vector vector)
{
    return sqrt(vector.x * vector.x + vector.y * vector.y);
}

// c.
bool KiemTraVuongGoc(Vector vector1, Vector vector2)
{
    return (vector1.x * vector2.x + vector1.y * vector2.y) == 0;
}

int main()
{
    return 0;
}