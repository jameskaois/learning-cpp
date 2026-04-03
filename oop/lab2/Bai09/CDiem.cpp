#include "CDiem.h"
#include <iostream>
using namespace std;
CDiem::CDiem() { x = y = 0; }
void CDiem::Nhap() { cin >> x >> y; }
void CDiem::Xuat() { cout << "(" << x << ", " << y << ")"; }
