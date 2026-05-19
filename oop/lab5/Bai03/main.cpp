#include <iostream>
#include "MachNoiTiep.h"
#include "MachSongSong.h"
using namespace std;

int main() {
    cout << "1. Nhap mach noi tiep" << endl;
    cout << "2. Nhap mach song song" << endl;
    int choice;
    cout << "Chon loai mach chinh: ";
    cin >> choice;

    MachDien* machChinh;
    if (choice == 1) {
        machChinh = new MachNoiTiep();
    } else {
        machChinh = new MachSongSong();
    }

    machChinh->Nhap();
    
    cout << "\n--- THONG TIN MACH DIEN ---" << endl;
    machChinh->Xuat();

    cout << "\nDien tro tuong duong cua mach: " << machChinh->TinhDienTro() << endl;

    return 0;
}
