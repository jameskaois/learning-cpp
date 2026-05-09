#ifndef CMANGDONG_H
#define CMANGDONG_H

class CMangDong {
private:
    int *arr;
    int n;
public:
    CMangDong(); // Default constructor
    CMangDong(int size); // Parameterized constructor
    CMangDong(const CMangDong& other); // Copy constructor
    ~CMangDong(); // Destructor
};

#endif
