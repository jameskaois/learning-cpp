#include "CDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

CDiem::CDiem() { x = y = 0; }
CDiem::CDiem(float xx, float yy) : x(xx), y(yy) {}
void CDiem::Nhap() { cin >> x >> y; }
void CDiem::Xuat() { cout << "(" << x << ", " << y << ")"; }
float CDiem::KhoangCach(CDiem b) { return sqrt(pow(x-b.x, 2) + pow(y-b.y, 2)); }
