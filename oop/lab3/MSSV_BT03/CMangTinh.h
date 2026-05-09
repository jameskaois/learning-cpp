#ifndef CMANGTINH_H
#define CMANGTINH_H

#define MAX_SIZE 100

class CMangTinh {
private:
    int arr[MAX_SIZE];
    int n;
public:
    CMangTinh(); // Default constructor
    CMangTinh(int size); // Parameterized constructor
    CMangTinh(const CMangTinh& other); // Copy constructor
    ~CMangTinh(); // Destructor
};

#endif
