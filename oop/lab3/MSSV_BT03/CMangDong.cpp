#include "CMangDong.h"
#include <iostream>

CMangDong::CMangDong() {
    arr = nullptr;
    n = 0;
}

CMangDong::CMangDong(int size) {
    if (size > 0) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = 0;
        }
    } else {
        n = 0;
        arr = nullptr;
    }
}

CMangDong::CMangDong(const CMangDong& other) {
    n = other.n;
    if (n > 0) {
        arr = new int[n];
        for (int i = 0; i < n; ++i) {
            arr[i] = other.arr[i];
        }
    } else {
        arr = nullptr;
    }
}

CMangDong::~CMangDong() {
    if (arr != nullptr) {
        delete[] arr;
        arr = nullptr;
    }
}
