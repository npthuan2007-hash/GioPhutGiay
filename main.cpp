#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

int main() {
    GioPhutGiay tg;

    cout << "--- CHUONG TRINH XAY DUNG GIO PHUT GIAY ---\n";
    tg.Nhap();

    cout << "\nThoi gian ban vua nhap: ";
    tg.Xuat();
    
    tg.TinhCongThemMotGiay();
    
    cout << "\nThoi gian sau khi cong them 1 giay: ";
    tg.Xuat();
    cout << "\n------------------------------------------\n";

    return 0;
}