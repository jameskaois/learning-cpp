#ifndef CHOCSINH_H
#define CHOCSINH_H
#include <string>
using namespace std;
class CHocSinh {
private:
    string hoTen;
    float toan, van;
public:
    void Nhap();
    void Xuat();
    float DiemTrungBinh();
};
#endif
