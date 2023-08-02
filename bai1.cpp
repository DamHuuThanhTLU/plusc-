#include <iostream>
#include <vector>
using namespace std;

int TienDien(int so_dien_tieu_thu) {
    if (so_dien_tieu_thu < 250) {
        return so_dien_tieu_thu * 2000;
    } else if (so_dien_tieu_thu >= 250 && so_dien_tieu_thu < 400) {
        return so_dien_tieu_thu * 3000;
    } else if (so_dien_tieu_thu >= 400 && so_dien_tieu_thu < 500) {
        return so_dien_tieu_thu * 4000;
    } else {
        return so_dien_tieu_thu * 5000;
    }
}

int main() {
    int n;
    cout << "Nhap so luong ho gia dinh: ";
    cin >> n;

    vector<int> so_dien_tieu_thu(n);
    for (int i = 0; i < n; ++i) {
        cout << "Nhap so dien tieu thu cua ho gia dinh " << i + 1 << ": ";
        cin >> so_dien_tieu_thu[i];
    }

    int min_tien_dien = TienDien(so_dien_tieu_thu[0]);
    for (int i = 1; i < n; ++i) {
        int tien_dien_ho_i = TienDien(so_dien_tieu_thu[i]);
        if (tien_dien_ho_i < min_tien_dien) {
            min_tien_dien = tien_dien_ho_i;
        }
    }

    cout << "So tien dien it nhat trong cac ho gia dinh la: " << min_tien_dien << " dong" << endl;

    return 0;
}

