#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ten;
    double diemToan;
    double diemLy;
    double diemAnh;
    double diemTrungBinh;
};
bool compareDiemToan(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.diemToan > sv2.diemToan;
}
bool compareDiemLy(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.diemLy > sv2.diemLy;
}
bool compareDiemAnh(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.diemAnh > sv2.diemAnh;
}
bool compareDiemTrungBinh(const SinhVien& sv1, const SinhVien& sv2) {
    return sv1.diemTrungBinh > sv2.diemTrungBinh;
}
void nhapDiemSinhVien(SinhVien& sv) {
    cout << "Nhap ten sinh vien: ";
    cin.ignore();
    getline(cin, sv.ten);

    cout << "Nhap diem Toan: ";
    cin >> sv.diemToan;

    cout << "Nhap diem Ly: ";
    cin >> sv.diemLy;

    cout << "Nhap diem Anh: ";
    cin >> sv.diemAnh;

    sv.diemToan = max(0.0, min(10.0, sv.diemToan));
    sv.diemLy = max(0.0, min(10.0, sv.diemLy));
    sv.diemAnh = max(0.0, min(10.0, sv.diemAnh));

    sv.diemTrungBinh = (sv.diemToan + sv.diemLy + sv.diemAnh) / 3;
}
void inDanhSachSinhVien(const vector<SinhVien>& danhSach) {
    cout << setw(15) << "Ten";
    cout << setw(15) << "Toan";
    cout << setw(15) << "Ly";
    cout << setw(15) << "Anh";
    cout << setw(15) << "TB";
    cout << endl;

    for (const SinhVien& sv : danhSach) {
        cout << setw(15) << sv.ten;
        cout << setw(15) << sv.diemToan;
        cout << setw(15) << sv.diemLy;
        cout << setw(15) << sv.diemAnh;
        cout << setw(15) << sv.diemTrungBinh;
        cout << endl;
    }
}

int main() {
    int soLuongSinhVien;
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuongSinhVien;

    vector<SinhVien> danhSachSinhVien(soLuongSinhVien);

    for (int i = 0; i < soLuongSinhVien; i++) {
        cout << "Nhap thong tin sinh vien " << i + 1 << ":" << endl;
        nhapDiemSinhVien(danhSachSinhVien[i]);
        cout << endl;
    }

    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), compareDiemToan);
    cout << "Theo diem mon Toan:" << endl;
    inDanhSachSinhVien(danhSachSinhVien);
    cout << endl;

    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), compareDiemLy);
    cout << "Theo diem mon Ly:" << endl;
    inDanhSachSinhVien(danhSachSinhVien);
    cout << endl;

    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), compareDiemAnh);
    inDanhSachSinhVien(danhSachSinhVien);
    cout << endl;

    sort(danhSachSinhVien.begin(), danhSachSinhVien.end(), compareDiemTrungBinh);
    inDanhSachSinhVien(danhSachSinhVien);
    cout << endl;

    return 0;
}
