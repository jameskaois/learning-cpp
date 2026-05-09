#pragma once
#include <iostream>

class CHonSo {
private:
    int nguyen, tu, mau;
    void chuyenThanhPhanSo(int& t, int& m) const;
    void tuPhanSo(int t, int m);
public:
    CHonSo(int n = 0, int t = 0, int m = 1);
    
    friend std::istream& operator>>(std::istream& is, CHonSo& h);
    friend std::ostream& operator<<(std::ostream& os, const CHonSo& h);
    
    CHonSo operator+(const CHonSo& h) const;
    CHonSo operator-(const CHonSo& h) const;
    CHonSo operator*(const CHonSo& h) const;
    CHonSo operator/(const CHonSo& h) const;
    
    CHonSo& operator+=(const CHonSo& h);
    CHonSo& operator-=(const CHonSo& h);
    CHonSo& operator*=(const CHonSo& h);
    CHonSo& operator/=(const CHonSo& h);
    
    CHonSo& operator++();
    CHonSo operator++(int);
    CHonSo& operator--();
    CHonSo operator--(int);
    
    bool operator>(const CHonSo& h) const;
    bool operator>=(const CHonSo& h) const;
    bool operator<(const CHonSo& h) const;
    bool operator<=(const CHonSo& h) const;
    bool operator==(const CHonSo& h) const;
    bool operator!=(const CHonSo& h) const;
    
    CHonSo& operator=(const CHonSo& h);
};
