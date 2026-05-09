#include "CMaTranDong.h"

CMaTranDong::CMaTranDong() {
    mat = nullptr;
    rows = 0;
    cols = 0;
}

CMaTranDong::CMaTranDong(int r, int c) {
    if (r > 0 && c > 0) {
        rows = r;
        cols = c;
        mat = new int*[rows];
        for(int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
            for(int j = 0; j < cols; ++j) {
                mat[i][j] = 0;
            }
        }
    } else {
        mat = nullptr;
        rows = 0;
        cols = 0;
    }
}

CMaTranDong::CMaTranDong(const CMaTranDong& other) {
    rows = other.rows;
    cols = other.cols;
    if (rows > 0 && cols > 0) {
        mat = new int*[rows];
        for(int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
            for(int j = 0; j < cols; ++j) {
                mat[i][j] = other.mat[i][j];
            }
        }
    } else {
        mat = nullptr;
    }
}

CMaTranDong::~CMaTranDong() {
    if (mat != nullptr) {
        for(int i = 0; i < rows; ++i) {
            delete[] mat[i];
        }
        delete[] mat;
        mat = nullptr;
    }
}
