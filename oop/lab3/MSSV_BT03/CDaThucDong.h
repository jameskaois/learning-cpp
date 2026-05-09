#ifndef CDATHUCDONG_H
#define CDATHUCDONG_H

class CDaThucDong {
private:
    int *heso;
    int bac;
public:
    CDaThucDong();
    CDaThucDong(int b);
    CDaThucDong(const CDaThucDong& other);
    ~CDaThucDong();
};

#endif
