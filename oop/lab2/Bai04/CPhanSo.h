#ifndef CPHANSO_H
#define CPHANSO_H

class CPhanSo {
private:
    int tuSo;
    int mauSo;
public:
    CPhanSo();
    CPhanSo(int tu, int mau);
    void Nhap();
    void Xuat();
    void RutGon();
    CPhanSo Tong(CPhanSo);
    CPhanSo Hieu(CPhanSo);
    CPhanSo Tich(CPhanSo);
    CPhanSo Thuong(CPhanSo);
};

#endif
