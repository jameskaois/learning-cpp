#pragma once
#include <iostream>

class CTime {
private:
    int gio, phut, giay;
    void chietXuat();
public:
    CTime(int g = 0, int p = 0, int s = 0);
    
    friend std::istream& operator>>(std::istream& is, CTime& t);
    friend std::ostream& operator<<(std::ostream& os, const CTime& t);
    
    CTime operator+(int s) const;
    CTime operator-(int s) const;
    
    CTime& operator++(); 
    CTime operator++(int); 
    CTime& operator--();
    CTime operator--(int);
};
