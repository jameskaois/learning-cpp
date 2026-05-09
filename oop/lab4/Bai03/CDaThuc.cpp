#include "CDaThuc.h"
#include <cmath>
#include <algorithm>

using namespace std;

CDaThuc::CDaThuc() : bac(0) {
    heso = new double[1];
    heso[0] = 0;
}

CDaThuc::CDaThuc(int b) : bac(b) {
    if (bac < 0) bac = 0;
    heso = new double[bac + 1];
    for (int i = 0; i <= bac; ++i) {
        heso[i] = 0;
    }
}

CDaThuc::CDaThuc(const CDaThuc& dt) : bac(dt.bac) {
    heso = new double[bac + 1];
    for (int i = 0; i <= bac; ++i) heso[i] = dt.heso[i];
}

CDaThuc::~CDaThuc() {
    delete[] heso;
}

istream& operator>>(istream& is, CDaThuc& dt) {
    is >> dt.bac;
    delete[] dt.heso;
    if (dt.bac < 0) dt.bac = 0;
    dt.heso = new double[dt.bac + 1];
    for (int i = dt.bac; i >= 0; --i) {
        is >> dt.heso[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const CDaThuc& dt) {
    bool first = true;
    for (int i = dt.bac; i >= 0; --i) {
        if (dt.heso[i] != 0 || dt.bac == 0) {
            if (!first) {
                if (dt.heso[i] > 0) os << " + ";
                else os << " - ";
            } else if (dt.heso[i] < 0) {
                os << "-";
            }
            
            double val = abs(dt.heso[i]);
            if (val != 1 || i == 0) os << val;
            
            if (i > 0) os << "x";
            if (i > 1) os << "^" << i;
            
            first = false;
        }
    }
    if (first) os << "0";
    return os;
}

CDaThuc CDaThuc::operator+(const CDaThuc& dt) const {
    int max_bac = max(bac, dt.bac);
    CDaThuc kq(max_bac);
    for (int i = 0; i <= max_bac; ++i) {
        double h1 = (i <= bac) ? heso[i] : 0;
        double h2 = (i <= dt.bac) ? dt.heso[i] : 0;
        kq.heso[i] = h1 + h2;
    }
    while (kq.bac > 0 && kq.heso[kq.bac] == 0) kq.bac--;
    return kq;
}

CDaThuc CDaThuc::operator-(const CDaThuc& dt) const {
    int max_bac = max(bac, dt.bac);
    CDaThuc kq(max_bac);
    for (int i = 0; i <= max_bac; ++i) {
        double h1 = (i <= bac) ? heso[i] : 0;
        double h2 = (i <= dt.bac) ? dt.heso[i] : 0;
        kq.heso[i] = h1 - h2;
    }
    while (kq.bac > 0 && kq.heso[kq.bac] == 0) kq.bac--;
    return kq;
}

CDaThuc CDaThuc::operator*(const CDaThuc& dt) const {
    CDaThuc kq(bac + dt.bac);
    for (int i = 0; i <= bac; ++i) {
        for (int j = 0; j <= dt.bac; ++j) {
            kq.heso[i + j] += heso[i] * dt.heso[j];
        }
    }
    return kq;
}

CDaThuc CDaThuc::operator/(const CDaThuc& dt) const {
    if (dt.bac == 0 && dt.heso[0] == 0) return CDaThuc(); 
    if (bac < dt.bac) return CDaThuc(); 
    
    CDaThuc thuong(bac - dt.bac);
    CDaThuc du = *this;
    
    for (int i = thuong.bac; i >= 0; --i) {
        thuong.heso[i] = du.heso[i + dt.bac] / dt.heso[dt.bac];
        for (int j = 0; j <= dt.bac; ++j) {
            du.heso[i + j] -= thuong.heso[i] * dt.heso[j];
        }
    }
    return thuong;
}

CDaThuc& CDaThuc::operator+=(const CDaThuc& dt) {
    *this = *this + dt;
    return *this;
}

CDaThuc& CDaThuc::operator-=(const CDaThuc& dt) {
    *this = *this - dt;
    return *this;
}

CDaThuc& CDaThuc::operator*=(const CDaThuc& dt) {
    *this = *this * dt;
    return *this;
}

CDaThuc& CDaThuc::operator/=(const CDaThuc& dt) {
    *this = *this / dt;
    return *this;
}

bool CDaThuc::operator==(const CDaThuc& dt) const {
    if (bac != dt.bac) return false;
    for (int i = 0; i <= bac; ++i) {
        if (heso[i] != dt.heso[i]) return false;
    }
    return true;
}

bool CDaThuc::operator!=(const CDaThuc& dt) const {
    return !(*this == dt);
}

CDaThuc& CDaThuc::operator=(const CDaThuc& dt) {
    if (this != &dt) {
        delete[] heso;
        bac = dt.bac;
        heso = new double[bac + 1];
        for (int i = 0; i <= bac; ++i) heso[i] = dt.heso[i];
    }
    return *this;
}
