#ifndef CDATHUCTINH_H
#define CDATHUCTINH_H

#define MAX_DEGREE 100

class CDaThucTinh {
private:
    int heso[MAX_DEGREE + 1];
    int bac;
public:
    CDaThucTinh();
    CDaThucTinh(int b);
    CDaThucTinh(const CDaThucTinh& other);
    ~CDaThucTinh();
};

#endif
