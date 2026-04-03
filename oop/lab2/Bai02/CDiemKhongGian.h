#ifndef CDIEMKHONGGIAN_H
#define CDIEMKHONGGIAN_H

class CDiemKhongGian {
private:
    float x;
    float y;
    float z;

public:
    CDiemKhongGian();
    void Nhap();
    void Xuat();
    float TinhKhoangCach(CDiemKhongGian d2);
};

#endif