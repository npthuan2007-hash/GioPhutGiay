#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

class GioPhutGiay {
private:
    int iGio;
    int iPhut;
    int iGiay;

    // Hàm hỗ trợ kiểm tra tính hợp lệ của thời gian nhập vào
    bool KiemTraHopLe();

public:
    GioPhutGiay(); // Constructor mặc định
    GioPhutGiay(int gio, int phut, int giay); // Constructor có tham số

    void Nhap();
    void Xuat();
    void TinhCongThemMotGiay();
};

#endif