#include <iostream>
#include "ThuMuc.h"
using namespace std;

int main() {
    cout << "--- NHAP THONG TIN CAY THU MUC GOC ---" << endl;
    ThuMuc root;
    root.Nhap();
    
    cout << "\n--- THONG TIN CAY THU MUC ---" << endl;
    root.Xuat();
    
    cout << "\nTong dung luong cua cay: " << root.TinhDungLuong() << " MB" << endl;
    cout << "So luong tap tin trong cay: " << root.DemTapTin() << endl;
    cout << "So luong thu muc con trong cay: " << root.DemThuMucCon() << endl;

    return 0;
}
