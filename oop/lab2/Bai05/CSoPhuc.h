#ifndef CSOPHUC_H
#define CSOPHUC_H

class CSoPhuc {
private:
    float thuc, ao;
public:
    CSoPhuc();
    CSoPhuc(float t, float a);
    void Nhap();
    void Xuat();
    CSoPhuc Tong(CSoPhuc);
    CSoPhuc Hieu(CSoPhuc);
    CSoPhuc Tich(CSoPhuc);
};

#endif
