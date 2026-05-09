#include "CSoPhuc.h"
#include <cmath>

using namespace std;

CSoPhuc::CSoPhuc(double t, double a) : thuc(t), ao(a) {}

istream& operator>>(istream& is, CSoPhuc& sp) {
    is >> sp.thuc >> sp.ao;
    return is;
}

ostream& operator<<(ostream& os, const CSoPhuc& sp) {
    if (sp.thuc != 0) {
        os << sp.thuc;
        if (sp.ao > 0) os << " + " << sp.ao << "i";
        else if (sp.ao < 0) os << " - " << abs(sp.ao) << "i";
    } else {
        if (sp.ao != 0) os << sp.ao << "i";
        else os << "0";
    }
    return os;
}

CSoPhuc CSoPhuc::operator+(const CSoPhuc& sp) const {
    return CSoPhuc(thuc + sp.thuc, ao + sp.ao);
}

CSoPhuc CSoPhuc::operator-(const CSoPhuc& sp) const {
    return CSoPhuc(thuc - sp.thuc, ao - sp.ao);
}

CSoPhuc CSoPhuc::operator*(const CSoPhuc& sp) const {
    return CSoPhuc(thuc * sp.thuc - ao * sp.ao, thuc * sp.ao + ao * sp.thuc);
}

CSoPhuc CSoPhuc::operator/(const CSoPhuc& sp) const {
    double mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    if (mau == 0) return CSoPhuc(); 
    return CSoPhuc((thuc * sp.thuc + ao * sp.ao) / mau, (ao * sp.thuc - thuc * sp.ao) / mau);
}

CSoPhuc& CSoPhuc::operator+=(const CSoPhuc& sp) {
    *this = *this + sp;
    return *this;
}

CSoPhuc& CSoPhuc::operator-=(const CSoPhuc& sp) {
    *this = *this - sp;
    return *this;
}

CSoPhuc& CSoPhuc::operator*=(const CSoPhuc& sp) {
    *this = *this * sp;
    return *this;
}

CSoPhuc& CSoPhuc::operator/=(const CSoPhuc& sp) {
    *this = *this / sp;
    return *this;
}

double CSoPhuc::module() const {
    return sqrt(thuc * thuc + ao * ao);
}

bool CSoPhuc::operator>(const CSoPhuc& sp) const {
    return module() > sp.module();
}

bool CSoPhuc::operator>=(const CSoPhuc& sp) const {
    return module() >= sp.module();
}

bool CSoPhuc::operator<(const CSoPhuc& sp) const {
    return module() < sp.module();
}

bool CSoPhuc::operator<=(const CSoPhuc& sp) const {
    return module() <= sp.module();
}

bool CSoPhuc::operator==(const CSoPhuc& sp) const {
    return thuc == sp.thuc && ao == sp.ao;
}

bool CSoPhuc::operator!=(const CSoPhuc& sp) const {
    return !(*this == sp);
}

CSoPhuc& CSoPhuc::operator=(const CSoPhuc& sp) {
    if (this != &sp) {
        thuc = sp.thuc;
        ao = sp.ao;
    }
    return *this;
}
