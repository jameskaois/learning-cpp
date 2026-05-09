#include "CMaTranTinh.h"

CMaTranTinh::CMaTranTinh() {
    rows = 0;
    cols = 0;
}

CMaTranTinh::CMaTranTinh(int r, int c) {
    if (r > 0 && r <= MAX_ROWS && c > 0 && c <= MAX_COLS) {
        rows = r;
        cols = c;
        for(int i = 0; i < rows; ++i) {
            for(int j = 0; j < cols; ++j) {
                mat[i][j] = 0;
            }
        }
    } else {
        rows = 0;
        cols = 0;
    }
}

CMaTranTinh::CMaTranTinh(const CMaTranTinh& other) {
    rows = other.rows;
    cols = other.cols;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            mat[i][j] = other.mat[i][j];
        }
    }
}

CMaTranTinh::~CMaTranTinh() {
    // Nothing to do for static matrix
}
