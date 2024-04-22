#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p;
    *p2 = 100; // Lỗi truy cập vào vùng nhớ đã được giải phóng. Biến con trỏ p2 trỏ đến địa chỉ của p, sau khi p được giải phóng bằng delete p, thì việc truy cập *p2 là không hợp lệ.
    cout << *p2;
    delete p2; // bộ nhớ đã được giải phóng, dòng này khiến nó cố giải phóng lần 2
    return 0;
}
