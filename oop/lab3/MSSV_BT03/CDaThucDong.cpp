#include "CDaThucDong.h"

CDaThucDong::CDaThucDong() {
    bac = 0;
    heso = new int[1];
    heso[0] = 0;
}

CDaThucDong::CDaThucDong(int b) {
    if (b >= 0) {
        bac = b;
        heso = new int[bac + 1];
        for(int i = 0; i <= bac; ++i) {
            heso[i] = 0;
        }
    } else {
        bac = 0;
        heso = new int[1];
        heso[0] = 0;
    }
}

CDaThucDong::CDaThucDong(const CDaThucDong& other) {
    bac = other.bac;
    heso = new int[bac + 1];
    for(int i = 0; i <= bac; ++i) {
        heso[i] = other.heso[i];
    }
}

CDaThucDong::~CDaThucDong() {
    if (heso != nullptr) {
        delete[] heso;
        heso = nullptr;
    }
}
