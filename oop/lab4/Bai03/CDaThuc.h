#pragma once
#include <iostream>

class CDaThuc {
private:
    int bac;
    double* heso; 
public:
    CDaThuc();
    CDaThuc(int b);
    CDaThuc(const CDaThuc& dt);
    ~CDaThuc();
    
    friend std::istream& operator>>(std::istream& is, CDaThuc& dt);
    friend std::ostream& operator<<(std::ostream& os, const CDaThuc& dt);
    
    CDaThuc operator+(const CDaThuc& dt) const;
    CDaThuc operator-(const CDaThuc& dt) const;
    CDaThuc operator*(const CDaThuc& dt) const;
    CDaThuc operator/(const CDaThuc& dt) const; 
    
    CDaThuc& operator+=(const CDaThuc& dt);
    CDaThuc& operator-=(const CDaThuc& dt);
    CDaThuc& operator*=(const CDaThuc& dt);
    CDaThuc& operator/=(const CDaThuc& dt);
    
    bool operator==(const CDaThuc& dt) const;
    bool operator!=(const CDaThuc& dt) const;
    
    CDaThuc& operator=(const CDaThuc& dt);
};
