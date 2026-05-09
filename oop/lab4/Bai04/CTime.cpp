#include "CTime.h"

using namespace std;

void CTime::chietXuat() {
    int total_seconds = gio * 3600 + phut * 60 + giay;
    if (total_seconds < 0) total_seconds = 0; 
    
    gio = (total_seconds / 3600) % 24; 
    phut = (total_seconds % 3600) / 60;
    giay = total_seconds % 60;
}

CTime::CTime(int g, int p, int s) : gio(g), phut(p), giay(s) {
    chietXuat();
}

istream& operator>>(istream& is, CTime& t) {
    is >> t.gio >> t.phut >> t.giay;
    t.chietXuat();
    return is;
}

ostream& operator<<(ostream& os, const CTime& t) {
    os << t.gio << "h " << t.phut << "m " << t.giay << "s";
    return os;
}

CTime CTime::operator+(int s) const {
    return CTime(gio, phut, giay + s);
}

CTime CTime::operator-(int s) const {
    return CTime(gio, phut, giay - s);
}

CTime& CTime::operator++() {
    giay++;
    chietXuat();
    return *this;
}

CTime CTime::operator++(int) {
    CTime temp = *this;
    giay++;
    chietXuat();
    return temp;
}

CTime& CTime::operator--() {
    giay--;
    chietXuat();
    return *this;
}

CTime CTime::operator--(int) {
    CTime temp = *this;
    giay--;
    chietXuat();
    return temp;
}
