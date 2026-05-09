#ifndef CMATRANTINH_H
#define CMATRANTINH_H

#define MAX_ROWS 100
#define MAX_COLS 100

class CMaTranTinh {
private:
    int mat[MAX_ROWS][MAX_COLS];
    int rows, cols;
public:
    CMaTranTinh();
    CMaTranTinh(int r, int c);
    CMaTranTinh(const CMaTranTinh& other);
    ~CMaTranTinh();
};

#endif
