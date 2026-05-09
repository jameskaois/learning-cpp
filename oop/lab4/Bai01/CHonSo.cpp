#include "CHonSo.h"
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    a = abs(a); b = abs(b);
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void CHonSo::chuyenThanhPhanSo(int& t, int& m) const {
    m = mau;
    if (nguyen == 0) {
        t = tu;
    } else if (nguyen < 0) {
        t = nguyen * mau - tu;
    } else {
        t = nguyen * mau + tu;
    }
}

void CHonSo::tuPhanSo(int t, int m) {
    if (m == 0) m = 1;
    if (m < 0) { t = -t; m = -m; }
    int sign = (t < 0) ? -1 : 1;
    t = abs(t);
    nguyen = (t / m) * sign;
    tu = t % m;
    if (nguyen == 0) {
        tu = tu * sign;
    }
    mau = m;
    int d = gcd(abs(tu), mau);
    if (d > 0) {
        tu /= d;
        mau /= d;
    }
}

CHonSo::CHonSo(int n, int t, int m) {
    if (m == 0) m = 1;
    if (n == 0) {
        tuPhanSo(t, m);
    } else {
        int num = (n < 0) ? (n * m - t) : (n * m + t);
        tuPhanSo(num, m);
    }
}

istream& operator>>(istream& is, CHonSo& h) {
    int n, t, m;
    is >> n >> t >> m;
    if (m == 0) m = 1;
    if (n == 0) {
        h.tuPhanSo(t, m);
    } else {
        int num = (n < 0) ? (n * m - t) : (n * m + t);
        h.tuPhanSo(num, m);
    }
    return is;
}

ostream& operator<<(ostream& os, const CHonSo& h) {
    if (h.tu == 0) {
        os << h.nguyen;
    } else if (h.nguyen == 0) {
        os << h.tu << "/" << h.mau;
    } else {
        os << h.nguyen << " " << h.tu << "/" << h.mau;
    }
    return os;
}

CHonSo CHonSo::operator+(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    CHonSo kq;
    kq.tuPhanSo(t1 * m2 + t2 * m1, m1 * m2);
    return kq;
}

CHonSo CHonSo::operator-(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    CHonSo kq;
    kq.tuPhanSo(t1 * m2 - t2 * m1, m1 * m2);
    return kq;
}

CHonSo CHonSo::operator*(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    CHonSo kq;
    kq.tuPhanSo(t1 * t2, m1 * m2);
    return kq;
}

CHonSo CHonSo::operator/(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    CHonSo kq;
    kq.tuPhanSo(t1 * m2, m1 * t2);
    return kq;
}

CHonSo& CHonSo::operator+=(const CHonSo& h) {
    *this = *this + h;
    return *this;
}

CHonSo& CHonSo::operator-=(const CHonSo& h) {
    *this = *this - h;
    return *this;
}

CHonSo& CHonSo::operator*=(const CHonSo& h) {
    *this = *this * h;
    return *this;
}

CHonSo& CHonSo::operator/=(const CHonSo& h) {
    *this = *this / h;
    return *this;
}

CHonSo& CHonSo::operator++() {
    int t, m;
    chuyenThanhPhanSo(t, m);
    tuPhanSo(t + m, m);
    return *this;
}

CHonSo CHonSo::operator++(int) {
    CHonSo temp = *this;
    ++(*this);
    return temp;
}

CHonSo& CHonSo::operator--() {
    int t, m;
    chuyenThanhPhanSo(t, m);
    tuPhanSo(t - m, m);
    return *this;
}

CHonSo CHonSo::operator--(int) {
    CHonSo temp = *this;
    --(*this);
    return temp;
}

bool CHonSo::operator>(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    return (long long)t1 * m2 > (long long)t2 * m1;
}

bool CHonSo::operator>=(const CHonSo& h) const {
    return !(*this < h);
}

bool CHonSo::operator<(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    return (long long)t1 * m2 < (long long)t2 * m1;
}

bool CHonSo::operator<=(const CHonSo& h) const {
    return !(*this > h);
}

bool CHonSo::operator==(const CHonSo& h) const {
    int t1, m1, t2, m2;
    chuyenThanhPhanSo(t1, m1);
    h.chuyenThanhPhanSo(t2, m2);
    return (long long)t1 * m2 == (long long)t2 * m1;
}

bool CHonSo::operator!=(const CHonSo& h) const {
    return !(*this == h);
}

CHonSo& CHonSo::operator=(const CHonSo& h) {
    if (this != &h) {
        nguyen = h.nguyen;
        tu = h.tu;
        mau = h.mau;
    }
    return *this;
}
