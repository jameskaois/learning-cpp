#include "CMangTinh.h"

CMangTinh::CMangTinh() {
    n = 0;
}

CMangTinh::CMangTinh(int size) {
    if (size > 0 && size <= MAX_SIZE) {
        n = size;
        for (int i = 0; i < n; ++i) {
            arr[i] = 0;
        }
    } else {
        n = 0;
    }
}

CMangTinh::CMangTinh(const CMangTinh& other) {
    n = other.n;
    for (int i = 0; i < n; ++i) {
        arr[i] = other.arr[i];
    }
}

CMangTinh::~CMangTinh() {
    // Nothing to do for static array
}
