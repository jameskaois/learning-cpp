#include "MachSongSong.h"
#include "DienTro.h"
#include "MachNoiTiep.h"

void MachSongSong::Nhap() {
    cout << "So luong mach thanh phan trong mach song song: ";
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

void MachSongSong::Xuat() {
    cout << "Mach Song Song gom: " << endl;
    for (int i = 0; i < n; i++) {
        ds[i]->Xuat();
    }
}

float MachSongSong::TinhDienTro() {
    float NghichDaoR = 0;
    for (int i = 0; i < n; i++) {
        float r = ds[i]->TinhDienTro();
        if (r != 0) {
            NghichDaoR += 1.0 / r;
        }
    }
    if (NghichDaoR == 0) return 0;
    return 1.0 / NghichDaoR;
}
