#pragma once
#include "MachDien.h"

class MachSongSong : public MachDien {
    private:
        int n;
        MachDien* ds[100];
    public:
        void Nhap();
        void Xuat();
        float TinhDienTro();
};
