#include "MachNoiTiep.h"
#include "DienTro.h"
#include "MachSongSong.h"

void MachNoiTiep::Nhap() {
    cout << "So luong mach thanh phan trong mach noi tiep: ";
    cin >> n;
    
    int loai;
    for (int i = 0; i < n; i++) {
        cout << "Thanh phan thu " << i + 1 << " (1. Dien tro, 2. Mach noi tiep, 3. Mach song song): ";
        cin >> loai;
        if (loai == 1) ds[i] = new DienTro;
        else if (loai == 2) ds[i] = new MachNoiTiep;
        else ds[i] = new MachSongSong;
        
        ds[i]->Nhap();
    }
}

void MachNoiTiep::Xuat() {
    cout << "Mach Noi Tiep gom: " << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
    }
}

float MachNoiTiep::TinhDienTro() {
    float R = 0;
    for (int i = 0; i < n; i++) {
        R += ds[i]->TinhDienTro();
    }
    return R;
}
