#include "CDaThucTinh.h"

CDaThucTinh::CDaThucTinh() {
    bac = 0;
    heso[0] = 0;
}

CDaThucTinh::CDaThucTinh(int b) {
    if (b >= 0 && b <= MAX_DEGREE) {
        bac = b;
        for(int i = 0; i <= bac; ++i) {
            heso[i] = 0;
        }
    } else {
        bac = 0;
        heso[0] = 0;
    }
}

CDaThucTinh::CDaThucTinh(const CDaThucTinh& other) {
    bac = other.bac;
    for(int i = 0; i <= bac; ++i) {
        heso[i] = other.heso[i];
    }
}

CDaThucTinh::~CDaThucTinh() {
    // Nothing to do for static polynomial
}
