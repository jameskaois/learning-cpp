#ifndef CDIEM_H
#define CDIEM_H

class CDiem {
private:
    float x, y;
public:
    CDiem();
    CDiem(float, float);
    void Nhap();
    void Xuat();
    float KhoangCach(CDiem);
    float GetX() { return x; }
    float GetY() { return y; }
};

#endif
