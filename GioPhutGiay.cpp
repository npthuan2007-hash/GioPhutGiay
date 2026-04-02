#include "GioPhutGiay.h"
#include <iostream>
#include <iomanip> // Thư viện dùng để định dạng xuất có số 0 ở đầu

using namespace std;

// Constructor mặc định (00:00:00)
GioPhutGiay::GioPhutGiay() {
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

// Constructor có tham số
GioPhutGiay::GioPhutGiay(int gio, int phut, int giay) {
    iGio = gio;
    iPhut = phut;
    iGiay = giay;
    if (!KiemTraHopLe()) { // Nếu truyền sai thì reset về 0
        iGio = iPhut = iGiay = 0;
    }
}

// Kiểm tra giờ (0-23), phút (0-59), giây (0-59)
bool GioPhutGiay::KiemTraHopLe() {
    if (iGio < 0 || iGio > 23) return false;
    if (iPhut < 0 || iPhut > 59) return false;
    if (iGiay < 0 || iGiay > 59) return false;
    return true;
}

// Hàm nhập với vòng lặp bắt lỗi
void GioPhutGiay::Nhap() {
    bool hopLe = false;
    do {
        cout << "Nhap gio (0-23): "; cin >> iGio;
        cout << "Nhap phut (0-59): "; cin >> iPhut;
        cout << "Nhap giay (0-59): "; cin >> iGiay;

        hopLe = KiemTraHopLe();
        if (!hopLe) {
            cout << "-> Lỗi: Thoi gian khong hop le. Vui long nhap lai!\n\n";
        }
    } while (!hopLe);
}

// Xuất định dạng hh:mm:ss sử dụng iomanip để tự động thêm số 0
void GioPhutGiay::Xuat() {
    cout << setfill('0') << setw(2) << iGio << ":"
         << setfill('0') << setw(2) << iPhut << ":"
         << setfill('0') << setw(2) << iGiay;
}

// Tính cộng thêm một giây 
void GioPhutGiay::TinhCongThemMotGiay() {
    iGiay++;
    if (iGiay > 59) {
        iGiay = 0;
        iPhut++;
        if (iPhut > 59) {
            iPhut = 0;
            iGio++;
            if (iGio > 23) {
                iGio = 0; // Qua ngày mới
            }
        }
    }
}