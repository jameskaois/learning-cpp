#pragma once
#include <iostream>

class CSoPhuc {
private:
    double thuc, ao;
public:
    CSoPhuc(double t = 0, double a = 0);
    
    friend std::istream& operator>>(std::istream& is, CSoPhuc& sp);
    friend std::ostream& operator<<(std::ostream& os, const CSoPhuc& sp);
    
    CSoPhuc operator+(const CSoPhuc& sp) const;
    CSoPhuc operator-(const CSoPhuc& sp) const;
    CSoPhuc operator*(const CSoPhuc& sp) const;
    CSoPhuc operator/(const CSoPhuc& sp) const;
    
    CSoPhuc& operator+=(const CSoPhuc& sp);
    CSoPhuc& operator-=(const CSoPhuc& sp);
    CSoPhuc& operator*=(const CSoPhuc& sp);
    CSoPhuc& operator/=(const CSoPhuc& sp);
    
    bool operator>(const CSoPhuc& sp) const;
    bool operator>=(const CSoPhuc& sp) const;
    bool operator<(const CSoPhuc& sp) const;
    bool operator<=(const CSoPhuc& sp) const;
    bool operator==(const CSoPhuc& sp) const;
    bool operator!=(const CSoPhuc& sp) const;
    
    CSoPhuc& operator=(const CSoPhuc& sp);
    double module() const;
};
