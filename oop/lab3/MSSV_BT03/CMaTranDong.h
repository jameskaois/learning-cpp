#ifndef CMATRANDONG_H
#define CMATRANDONG_H

class CMaTranDong {
private:
    int **mat;
    int rows, cols;
public:
    CMaTranDong();
    CMaTranDong(int r, int c);
    CMaTranDong(const CMaTranDong& other);
    ~CMaTranDong();
};

#endif
